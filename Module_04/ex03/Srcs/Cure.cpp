/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:49:58 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:50:01 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Cure::Cure(void)							// constructeur par defaut
{
	this->_type = "cure";
	std::cout << "Cure Default constructor called." << std::endl;
	return;
}

Cure::Cure(Cure const & ref)				// constructeur par copie
{
	std::cout << "Cure Copy constructor called." << std::endl;
	if (this == &ref)
		return;
	*this = ref;
	return;
}

Cure::Cure(std::string const &type)			// constructeur by string
{
	std::cout << "Cure String constructor called." << std::endl;
	this->_type = type;
	return;
}

Cure::~Cure(void)							// destructeur
{
	std::cout << "Cure Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Cure		&Cure::operator=(Cure const &rhs)
{
	std::cout << "Cure Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

AMateria	*Cure::clone(void) const
{
	AMateria	*cure;

	cure = new Cure;
	return (cure);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
