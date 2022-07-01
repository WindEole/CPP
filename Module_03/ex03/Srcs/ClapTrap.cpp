/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:49:34 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 10:49:36 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ClapTrap::ClapTrap(void)
{
	this->_name = "UNKNOWN";
	this->_initialHP = 10;
	this->_HitPoints = _initialHP;
	this->_initialEP = 10;
	this->_EnergyPoints = _initialEP;
	this->_initialAD = 0;
	this->_AttackDamage = _initialAD;
	std::cout << "ClapTrap Default constructor called : " << this->_name << " is created." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_initialHP = 10;
	this->_HitPoints = _initialHP;
	this->_initialEP = 10;
	this->_EnergyPoints = _initialEP;
	this->_initialAD = 0;
	this->_AttackDamage = _initialAD;
	std::cout << "ClapTrap Name constructor called : " << this->_name << " is created." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name, int HP, int EP, int AD)
{
	this->_name = name;
	this->_HitPoints = HP;
	this->_EnergyPoints = EP;
	this->_AttackDamage = AD;
	std::cout << "ClapTrap -> heir constructor called : " << this->_name << " is created." << std::endl;	
	return;
}

ClapTrap::ClapTrap(ClapTrap const & ct)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = ct;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called : " << this->_name << " is destroyed." << std::endl;
	return;
}

//--------------------------------   GETTER   --------------------------------//

std::string	ClapTrap::getName(void) const
{
//	std::cout << "getName member function called" << std::endl;
	return (this->_name); 
}

int			ClapTrap::getHitPoints(void) const
{
//	std::cout << "getHitPoints member function called" << std::endl;
	return (this->_HitPoints); 
}

int			ClapTrap::getEnergyPoints(void) const
{
//	std::cout << "getEnergyPonts member function called" << std::endl;
	return (this->_EnergyPoints); 
}

int			ClapTrap::getAttackDamage(void) const
{
//	std::cout << "getAttackDamage member function called" << std::endl;
	return (this->_AttackDamage); 
}

//------------------------------   SURCHARGES   ------------------------------//

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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

void	ClapTrap::attack(const std::string & target)
{
	if (this->check() == false)
		return;
	this->_EnergyPoints--;
	std::cout << "ClapTrap [" << ClapTrap::getName() << "] attacks " << target;
	std::cout << " for 1 Energy Point, causing " << ClapTrap::getAttackDamage() << " damage ! ";
	std::cout << "He has " << ClapTrap::getEnergyPoints() << " Energy Points left." << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints == 0 && this->check() == false)
		return;
	if (amount < (unsigned int)ClapTrap::getHitPoints())
	{
		this->_HitPoints -= amount;
		std::cout << "[" << this->_name << "] receives " << amount << " damage ! ";
		std::cout << "He has " << ClapTrap::getHitPoints() << " Hit Points left." << std::endl;
	}
	else
	{
		this->_HitPoints = 0;
		std::cout << "[" << ClapTrap::getName() << "] receives " << amount;
		std::cout << " damage and dies tragically..." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->check() == false)
		return;
	this->_EnergyPoints--;
	this->_HitPoints += amount;
	if (this->_HitPoints >= this->_initialHP)
	{
		this->_HitPoints = this->_initialHP;
		std::cout << "[" << this->_name << "] is totally repaired ! He has ";
		std::cout << this->_HitPoints << " Hit Points now." << std::endl;
	}
	else
	{
		std::cout << "[" << this->_name << "] has recovered " << amount << " Hit Points !";
		std::cout << " He has " << this->_HitPoints << " now." << std::endl;			
	}
}

bool	ClapTrap::check(void) const
{
	if (this->_HitPoints <= 0)
	{
		std::cout << "[" << this->_name << "] is dead..." << std::endl;
		return (false);
	}
	if (this->_EnergyPoints <= 0)
	{
		std::cout << "[" << this->_name << "] has no energy left, he can just hope for a swift death..." << std::endl;
		return (false);
	}
	return (true);
}
