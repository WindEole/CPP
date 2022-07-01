/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:00:06 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 18:00:16 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

FragTrap::FragTrap(void) : ClapTrap("UNKNOWN", 100, 100, 30)		// constructeur par defaut
{
	std::cout << "FragTrap Default constructor called : " << this->_name << " is created." << std::endl;
	this->_initialHP = 100;
	this->_initialAD = 30;
	this->_HitPoints = this->_initialHP;
	this->_AttackDamage = this->_initialAD;
	std::cout << "FragTrap Default constructor called : " << this->_name << " is created." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)	// constructeur
{
	this->_initialHP = 100;
	this->_initialAD = 30;
	this->_HitPoints = this->_initialHP;
	this->_AttackDamage = this->_initialAD;
	std::cout << "FragTrap Name constructor called : " << this->_name << " is created." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & st)								// constructeur par copie
{
	std::cout << "FragTrap Copy constructor called : " << this->_name << " is created." << std::endl;
	*this = st;
	return;
}

FragTrap::~FragTrap(void)											// destructeur
{
	std::cout << "FragTrap Destructor called : " << this->_name << " is destroyed." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

void	FragTrap::highFivesGuys(void)
{
	std::string	five;

	if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
	{
		std::cout << "FragTrap [" << this->_name << "] says : Wanna high fives, guys ?!" << std::endl;
		std::cin >> five;
		this->_EnergyPoints--;
		if (five == "5" || five == "five")
			std::cout << "FragTrap [" << this->_name << "] gives you a high fives !" << std::endl;
		else
			std::cout << "FragTrap [" << this->_name << "] is disappointed." << std::endl;
	}
	else if (this->_HitPoints <= 0)
		std::cout << "Poor FragTrap [" << this->_name << "] is dead, he just wanted to make friends..." << std::endl;
	else
		std::cout << "FragTrap [" << this->_name << "] is exhausted, he can't move anymore..." << std::endl;
	return;
}
