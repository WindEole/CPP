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

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Animal Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

// Animal::Animal(std::string name)
// {
// 	this->_type = name;
// 	std::cout << "Animal Name constructor called : " << this->_type << " is created." << std::endl;
// 	return;
// }

Animal::Animal(Animal const & ref)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = ref;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string		Animal::getType(void) const
{
	return (this->_type);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Animal::makeSound(void) const
{
	std::cout << "This " << this->_type << " is making some funny noises..." << std::endl;
	return;
}
