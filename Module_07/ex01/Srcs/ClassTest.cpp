/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassTest.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:48:48 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 17:48:50 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassTest.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Classtest::Classtest(void)								// constructeur par défaut
{
	std::cout << "Classtest Default constructor called." << std::endl;
	this->_n = 123;
	return;
}

Classtest::Classtest(Classtest const &copy)				// constructeur par copie
{
	std::cout << "Classtest Copy constructor called." << std::endl;
	this->_n = copy.getN();
	return;
}

Classtest::Classtest(int n)					// constructeur by param
{
	std::cout << "Classtest String constructor called." << std::endl;
	this->_n = n;
	return;
}

Classtest::~Classtest(void)								// destructeur
{
	std::cout << "Classtest Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Classtest		&Classtest::operator=(Classtest const &rhs)
{
	std::cout << "Classtest Assignment operator called." << std::endl;
	if (this != &rhs)
		this->_n = rhs.getN();
	return(*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

int				Classtest::getN() const
{
	return(this->_n);
}

void 			Classtest::setN(int n)
{
	this->_n = n;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

bool			Classtest::operator<(Classtest const &rhs) const
{
	return (this->_n < rhs.getN());
}

bool			Classtest::operator>(Classtest const &rhs) const
{
	return (this->_n > rhs.getN());
}

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, Classtest const &rhs)
{
	out << rhs.getN();
	return(out);
}

