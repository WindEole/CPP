/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:50:07 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 10:50:09 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ScavTrap::ScavTrap(void) : ClapTrap("UNKNOWN", 100, 50, 20)			// constructeur par defaut
{
	std::cout << "ScavTrap Default constructor called : " << this->_name << " is created." << std::endl;
	this->_initialHP = _HitPoints;
	this->_initialEP = _EnergyPoints;
	this->_initialAD = _AttackDamage;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)	// constructeur
{
	std::cout << "ScavTrap Name constructor called : " << this->_name << " is created." << std::endl;
	this->_initialHP = _HitPoints;
	this->_initialEP = _EnergyPoints;
	this->_initialAD = _AttackDamage;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & st)								// constructeur par copie
{
	std::cout << "ScavTrap Copy constructor called : " << this->_name << " is created." << std::endl;
	*this = st;
	return;
}

ScavTrap::~ScavTrap(void)											// destructeur
{
	std::cout << "ScavTrap Destructor called : " << this->_name << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	ScavTrap::attack(const std::string & target)
{
	if (this->check() == false)
		return;
	this->_EnergyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " for 1 Energy Point, causing " << this->_AttackDamage << " damage ! ";
	std::cout << "He has " << this->_EnergyPoints << " Energy Points left." << std::endl;
	return;
}


void	ScavTrap::guardGate(void) const
{
	if (this->_EnergyPoints <= 0 || this->_HitPoints <= 0)
		std::cout << "ScavTrap [" << this->getName() << "] cannot guard the Gate anymore..." << std::endl;
	else
		std::cout << "ScavTrap [" << this->getName() << "] has entered Gate Keeper mode" << std::endl;
	return;
}
