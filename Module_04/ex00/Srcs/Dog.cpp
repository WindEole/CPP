/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:44:35 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:44:39 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Dog::Dog(void)						// constructeur par defaut
{
	this->_type = "Dog";
	std::cout << "Dog Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

Dog::Dog(Dog const & ref)			// constructeur par copie
{
	std::cout << "Dog Copy constructor called : " << this->_type << " is created." << std::endl;
	*this = ref;
	return;
}

Dog::~Dog(void)						// destructeur
{
	std::cout << "Dog Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Dog::makeSound(void) const
{
	std::cout << "This " << this->_type << " is barking : waf !" << std::endl;
	return;
}
