/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:43:50 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:43:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

AAnimal::AAnimal(void)
{
	this->_type = "AAnimal";
	std::cout << "AAnimal Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & ref)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = ref;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	AAnimal::makeSound(void) const
{
	std::cout << "This " << this->_type << " is making some funny noises..." << std::endl;
	return;
}
