/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:52:35 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 10:52:38 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

AForm::AForm(void) :	_name("Original"), \
						_signGrade(1),\
						_execGrade(1)								// constructeur par defaut
{
	this->_signed = UNSIGNED;
	this->checkGrade();
	std::cout << "AForm Default constructor called." << std::endl;
	return;
}

AForm::AForm(AForm const &copy) :	_name(copy._name + "_copy"), \
									_signGrade(copy._signGrade), \
									_execGrade(copy._execGrade)		// constructeur par copie
{
	this->_signed = copy._signed;
	std::cout << "AForm Copy constructor called." << std::endl;
	return;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : 
	_name(name), \
	_signGrade(sign_grade), \
	_execGrade(exec_grade)											// constructeur by string
{
	this->_signed = UNSIGNED;
	this->checkGrade();
	std::cout << "AForm String constructor called." << std::endl;
	return;
}

AForm::~AForm(void)													// destructeur
{
	std::cout << "AForm " << this->getName() << " Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

AForm			&AForm::operator=(AForm const &rhs)
{
	this->_signed = rhs._signed;
	std::cout << "AForm Assignment operator called. !! Name, grade to sign and grade to execute cannot be assigned, left to default !!" << std::endl;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&AForm::getName() const
{
	return (this->_name);
}

bool const			&AForm::getSigned() const
{
	return (this->_signed);
}

int const			&AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int const			&AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void				AForm::checkGrade(void) const
{
	if (this->_signGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (AForm::GradeTooLowException());	
	if (this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
	return;
}

void				AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (AForm::GradeTooLowException());
	else
		this->_signed = SIGNED;
}

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream 		&operator<<(std::ostream & out, AForm const & rhs)
{
	out << "AForm [" << rhs.getName() << "]" << std::endl;
	out << "	Bureaucrat grade " << rhs.getSignGrade() << " needed to be signed." << std::endl;
	out << "	Bureaucrat grade " << rhs.getExecGrade() << " needed to be executed." << std::endl;
	if (rhs.getSigned())
		std::cout << "// This form has been signed //" << std::endl;
	else
		std::cout << "// This form has not been signed //" << std::endl;
	return (out);
}
