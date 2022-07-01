/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:58:07 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 10:58:10 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

WrongCat::WrongCat(void)						// constructeur par defaut
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default constructor called : " << this->_type << " is created." << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & ref)		// constructeur par copie
{
	std::cout << "WrongCat Copy constructor called : " << this->_type << " is created." << std::endl;
	*this = ref;
	return;
}

WrongCat::~WrongCat(void)						// destructeur
{
	std::cout << "WrongCat Destructor called : " << this->_type << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	WrongCat::makeSound(void) const
{
	std::cout << "This " << this->_type << " is ignoring you !" << std::endl;
	return;
}
