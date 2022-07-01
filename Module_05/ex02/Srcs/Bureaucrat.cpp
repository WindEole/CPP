/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:11:16 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/20 16:11:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Bureaucrat::Bureaucrat(void) : _name("Default")									// constructeur par defaut
{
	this->_grade = 150;
	std::cout << "Bureaucrat Default constructor called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name + "_copy")	// constructeur par copie
{
	this->_grade = copy._grade;
	std::cout << "Bureaucrat Copy constructor called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)				// constructeur by string
{
	this->_grade = grade;
	this->checkGrade();
	std::cout << "Bureaucrat String constructor called." << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void)								// destructeur
{
	std::cout << "Bureaucrat " << this->getName() << " Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	std::cout << "Bureaucrat Assignment operator called. !! Name cannot be assigned, left to default !!" << std::endl;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&Bureaucrat::getName() const
{
	return (this->_name);
}

int const			&Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void				Bureaucrat::upGrade(void)
{
	--this->_grade;
	this->checkGrade();
	return;
}

void				Bureaucrat::downGrade(void)
{
	++this->_grade;
	this->checkGrade();
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void				Bureaucrat::checkGrade(void)
{
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	return;
}

void				Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned() == SIGNED)
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because the form is already signed." << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signs " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->getName() << " can't sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

void				Bureaucrat::executeForm(AForm const & form)
{
	if (form.getSigned() == SIGNED)
	{
		try
		{
			form.execute(*this);
			std::cout << this->getName() << " successfully executed " << form.getName() << "." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout  << this->getName() << " failed to execute " << form.getName() << "." << std::endl;
		}
	}
}

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream 		&operator<<(std::ostream & out, Bureaucrat const & rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (out);
}
