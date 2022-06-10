/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:06:55 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 16:06:57 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & ct)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

int		ClapTrap::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	ClapTrap::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;	
	this->_nb = raw;
	return;
}

float	ClapTrap::toFloat(void) const
{
	float	res = (float)(this->_nb) / (1 << this->_fb);
	return (res);
}

int		ClapTrap::toInt(void) const
{
	int	res = (int)(this->_nb) / (1 << this->_fb);
	return (res);
}

ClapTrap			&ClapTrap::min(ClapTrap &lhs, ClapTrap &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const ClapTrap		&ClapTrap::min(ClapTrap const &lhs, ClapTrap const &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

ClapTrap			&ClapTrap::max(ClapTrap &lhs, ClapTrap &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const ClapTrap		&ClapTrap::max(ClapTrap const &lhs, ClapTrap const &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

//------------------------------   SURCHARGES   ------------------------------//

// surcharge d'assignation   -------------------------------------------------//

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

// surcharge d'operateurs arithmetiques   ------------------------------------//

ClapTrap	ClapTrap::operator+(ClapTrap const &rhs) const
{
	ClapTrap	res;
	res.setRawBits(this->_nb + rhs.getRawBits());
	return (res);
}
	
ClapTrap	ClapTrap::operator-(ClapTrap const &rhs) const
{
	ClapTrap	res;
	res.setRawBits(this->_nb - rhs.getRawBits());
	return (res);
}

// surcharge d'operateurs de comparaison   -----------------------------------//

// bool	ClapTrap::operator>(ClapTrap const &rhs) const
// {
// 	return (this->_nb > rhs.getRawBits());
// }

// bool	ClapTrap::operator<(ClapTrap const &rhs) const
// {
// 	return (this->_nb < rhs.getRawBits());
// }

// bool	ClapTrap::operator>=(ClapTrap const &rhs) const
// {
// 	return (this->_nb >= rhs.getRawBits());
// }

// bool	ClapTrap::operator<=(ClapTrap const &rhs) const
// {
// 	return (this->_nb <= rhs.getRawBits());
// }

// bool	ClapTrap::operator==(ClapTrap const &rhs) const
// {
// 	return (this->_nb == rhs.getRawBits());
// }

// bool	ClapTrap::operator!=(ClapTrap const &rhs) const
// {
// 	return (this->_nb != rhs.getRawBits());
// }

// surcharges d'operateurs in/de/crementation   ------------------------------//

ClapTrap	&ClapTrap::operator++()
{
	++this->_nb;
	return (*this);
}
		
ClapTrap	&ClapTrap::operator--()
{
	--this->_nb;
	return (*this);
}

ClapTrap	ClapTrap::operator++(int)
{
	ClapTrap	tmp(*this);

	++this->_nb;
	return (tmp);
}

ClapTrap	ClapTrap::operator--(int)
{
	ClapTrap	tmp(*this);

	--this->_nb;
	return (tmp);
}

// surcharges d'ostream (fct non membre)   -----------------------------------//

std::ostream	&operator<<(std::ostream & o, ClapTrap const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
