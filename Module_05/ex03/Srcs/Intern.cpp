/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:09:07 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/22 11:09:09 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Intern::Intern(void)								// constructeur par défaut
{
	std::cout << "Intern Default constructor called." << std::endl;
	return;
}

Intern::Intern(Intern const &copy)					// constructeur par copie
{
	*this = copy;
	std::cout << "Intern Copy constructor called." << std::endl;
	return;
}

Intern::~Intern(void)								// destructeur
{
	std::cout << "Intern Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Intern		&Intern::operator=(Intern const &rhs)
{
	std::cout << "Intern Assignment operator called." << std::endl;
	(void)rhs;
	return(*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

AForm 		*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	std::string form_type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i = -1;
	
	while (++i < 3)
		if (form_type[i] == form_name)
			break;

	switch(i)
	{
		case 3:
			throw(FormNotCreated());
		case 0:
			std::cout << "Intern creates [" << form_name << "] form." << std::endl << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates [" << form_name << "] form." << std::endl << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates [" << form_name << "] form." << std::endl << std::endl;
			return (new PresidentialPardonForm(target));
	}
	return NULL;
}
