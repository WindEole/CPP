/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:00:27 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 16:00:31 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 72, 45), \
	_target("Default")									// constructeur par défaut
{
	std::cout << "RobotomyRequestForm Default constructor called." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
	AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), \
	_target(copy._target)								// constructeur par copie
{
	this->_signed = copy.getSigned();
	*this = copy;
	std::cout << "RobotomyRequestForm Copy constructor called." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	AForm("RobotomyRequestForm", 72, 45), \
	_target(target)									// constructeur by string
{
	std::cout << "RobotomyRequestForm String constructor called." << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)					// destructeur
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "RobotomyRequestForm Assignment operator called." << std::endl;
	this->_signed = rhs._signed;
	return(*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&RobotomyRequestForm::getName() const
{
	return(this->_name);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static int	i;
	if (executor.getGrade() > 45)
		throw (AForm::GradeTooLowException());
	else if (!this->_signed)
	{
		std::cout << "This " << this->_name << " form is not signed, therefore it can't be executed." << std::endl;
		return;
	}
	else
	{
		std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..." << std::endl;
//		if ((1 + (rand() % 3)) == 2)
		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " robotomization failed." << std::endl;
		i++;
	}
}
