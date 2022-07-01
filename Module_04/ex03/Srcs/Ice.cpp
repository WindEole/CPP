/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:49:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:49:06 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Ice::Ice(void)									// constructeur par defaut
{
	std::cout << "Ice Default constructor called." << std::endl;
	this->_type = "ice";
	return;
}

Ice::Ice(Ice const & ref)						// constructeur par copie
{
	std::cout << "Ice Copy constructor called." << std::endl;
	if (this == &ref)
		return;
	*this = ref;
	return;
}

Ice::Ice(std::string const &type)				// constructeur by string
{
	std::cout << "Ice String constructor called." << std::endl;
	this->_type = type;
	return;
}

Ice::~Ice(void)								// destructeur
{
	std::cout << "Ice Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Ice			&Ice::operator=(Ice const &rhs)
{
	std::cout << "Ice Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

AMateria	*Ice::clone(void) const
{
	AMateria	*ice;
	
	ice = new Ice(*this);
	return (ice);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " ! *" << std::endl;
	return;
}
