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

#include "Form.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Form::Form(void) :	_name("Original"), \
					_signGrade(1),\
					_execGrade(1)									// constructeur par defaut
{
	this->_signed = UNSIGNED;
	this->checkGrade();
	std::cout << "Form Default constructor called." << std::endl;
	return;
}

Form::Form(Form const &copy) :	_name(copy._name + "_copy"), \
								_signGrade(copy._signGrade), \
								_execGrade(copy._execGrade)			// constructeur par copie
{
	this->_signed = copy._signed;
	std::cout << "Form Copy constructor called." << std::endl;
	return;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : 
	_name(name), \
	_signGrade(sign_grade), \
	_execGrade(exec_grade)											// constructeur by string
{
	this->_signed = UNSIGNED;
	this->checkGrade();
	std::cout << "Form String constructor called." << std::endl;
	return;
}

Form::~Form(void)								// destructeur
{
	std::cout << "Form " << this->getName() << " Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Form			&Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	std::cout << "Form Assignment operator called. !! Name, grade to sign and grade to execute cannot be assigned, left to default !!" << std::endl;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&Form::getName() const
{
	return (this->_name);
}

bool const			&Form::getSigned() const
{
	return (this->_signed);
}

int const			&Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int const			&Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void				Form::checkGrade(void) const
{
	if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());	
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
	return;
}

void				Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (Form::GradeTooLowException());
	else
		this->_signed = SIGNED;
}

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream 		&operator<<(std::ostream & out, Form const & rhs)
{
	// out << rhs.getName() << ", Form grade " << rhs.getSignGrade();
	// return (out);
	out << "Form [" << rhs.getName() << "]" << std::endl;
	out << "	Bureaucrat grade " << rhs.getSignGrade() << " needed to be signed." << std::endl;
	out << "	Bureaucrat grade " << rhs.getExecGrade() << " needed to be executed." << std::endl;
	if (rhs.getSigned())
		std::cout << "// This form has been signed //" << std::endl;
	else
		std::cout << "// This form has not been signed //" << std::endl;
	return (out);
}
