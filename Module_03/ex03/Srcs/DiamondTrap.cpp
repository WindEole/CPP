/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:51:59 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 11:52:02 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

DiamondTrap::DiamondTrap(void) : 
	ClapTrap(),
	FragTrap(),
	ScavTrap(),
	_name("UNKNOWN")								// constructeur par defaut
{
	this->ClapTrap::_name = _name + "_clap_name";
	// // this->_initialHP = this->FragTrap::_initialHP;
	// // this->_initialEP = this->ScavTrap::_initialEP;
	// // this->_initialAD = this->FragTrap::_initialAD;
	// this->_initialHP = FragTrap::getHP();
	// this->_initialEP = ScavTrap::getEP();
	// this->_initialAD = FragTrap::getAD();
	// this->_HitPoints = _initialHP;
	// this->_EnergyPoints = _initialEP;
	// this->_AttackDamage = _initialAD;
	std::cout << "DiamondTrap Default constructor called : " << this->_name << " is created." << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	_name(name)										// constructeur by name
{
	// // this->_initialHP = this->FragTrap::_initialHP;
	// // this->_initialEP = this->ScavTrap::_initialEP;
	// // this->_initialAD = this->FragTrap::_initialAD;
	// this->_initialHP = FragTrap::getHP();
	// this->_initialEP = ScavTrap::getEP();
	// this->_initialAD = FragTrap::getAD();
	// this->_HitPoints = _initialHP;
	// this->_EnergyPoints = _initialEP;
	// this->_AttackDamage = _initialAD;
	std::cout << "DiamondTrap Name constructor called : " << this->_name << " is created." << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & ref) :
	ClapTrap(ref._name + "_clap_name"),
	FragTrap(ref._name),
	ScavTrap(ref._name)								// constructeur par copie
{
	this->_name = ref._name;
	this->_HitPoints = ref._HitPoints;
	this->_EnergyPoints = ref._EnergyPoints;
	this->_AttackDamage = ref._AttackDamage;
	std::cout << "DiamondTrap Copy constructor called : " << this->_name << " is created." << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void)						// destructeur
{
	std::cout << "DiamondTrap Destructor called : " << this->_name << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name + "_clap_name";
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am a DIAMOND TRAP ! My name is [" << this->_name \
			  << "] but my ClapTrap name is [" << this->ClapTrap::_name << "] !" << std::endl;
	std::cout << "My Hit Points = \t" << this->_HitPoints << std::endl;
	std::cout << "My Energy Points = \t" << this->_EnergyPoints << std::endl;
	std::cout << "My Attack Damage = \t" << this->_AttackDamage << std::endl;
	return;
}
