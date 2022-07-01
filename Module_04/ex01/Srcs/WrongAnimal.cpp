/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:57:49 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 10:57:51 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ref)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = ref;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This " << this->_type << " is making weird noises..." << std::endl;
	return;
}
