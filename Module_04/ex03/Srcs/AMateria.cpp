/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:48:35 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:49:38 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

AMateria::AMateria(void)					// constructeur par defaut
{
	std::cout << "AMateria Default constructor called." << std::endl;
	return;
}

AMateria::AMateria(AMateria const &ref)		// constructeur par copie
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	if (this == &ref)
		return;
	this->_type = ref._type;
	return;
}

AMateria::AMateria(std::string const &type)	// constructeur by string
{
	std::cout << "AMateria String constructor called" << std::endl;
	this->_type = type;
	return;
}

AMateria::~AMateria()						// destructeur
{
	std::cout << "AMateria Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	std::cout << "AMateria Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void				AMateria::use(ICharacter &target)
{
	std::cout << "* This " << this->_type << " Materia was used on " << target.getName() << " *" << std::endl;
	return;
}
