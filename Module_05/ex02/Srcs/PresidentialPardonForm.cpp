/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:00:16 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 16:00:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", 25, 5), \
	_target("Default")									// constructeur par défaut
{
	std::cout << "PresidentialPardonForm Default constructor called." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :
	AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), \
	_target(copy._target)								// constructeur par copie
{
	this->_signed = copy.getSigned();
	*this = copy;
	std::cout << "PresidentialPardonForm Copy constructor called." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	AForm("PresidentialPardonForm", 25, 5), \
	_target(target)										// constructeur by string
{
	std::cout << "PresidentialPardonForm String constructor called." << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)	// destructeur
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "PresidentialPardonForm Assignment operator called." << std::endl;
	this->_signed = rhs._signed;
	return(*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&PresidentialPardonForm::getName(void) const
{
	return(this->_name);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 25)
		throw (AForm::GradeTooLowException());
	else if (!this->_signed)
	{
		std::cout << "This " << this->_name << " form is not signed, therefore it can't be executed." << std::endl;
		return;
	}
	else
	{
		std::cout	<< "I, " << executor.getName() << ", inform that, by official decree from the Mighty Zaphod Beeblebrox, " \
					<< this->_target << " has been pardonned and cleared of all charges." << std::endl;
	}
}

