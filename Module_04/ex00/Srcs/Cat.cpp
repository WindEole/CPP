/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:44:07 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:44:09 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Cat::Cat(void)						// constructeur par defaut
{
	this->_type = "Cat";
	std::cout << "Cat Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

// Cat::Cat(std::string name)			// constructeur
// {
// 	this->_type = name;
// 	std::cout << "Cat Name constructor called : " << this->_type << " is created." << std::endl;
// 	return;
// }

Cat::Cat(Cat const & ref)			// constructeur par copie
{
	std::cout << "Cat Copy constructor called : " << this->_type << " is created." << std::endl;
	*this = ref;
	return;
}

Cat::~Cat(void)						// destructeur
{
	std::cout << "Cat Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Cat::makeSound(void) const
{
	std::cout << "This " << this->_type << " is meowing : miaou !" << std::endl;
	return;
}
