/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:50:32 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:50:34 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Character::Character(void)						// constructeur par defaut
{
	int	i = -1;

	while (++i < 4)
		this->_inventory[i] = NULL;
	this->_nbMateria = 0;
	this->_name = "UNKNOWN";
	this->floor = NULL;
	std::cout << "Character Default constructor called." << std::endl;
	return;
}

Character::Character(Character const &copy)		// constructeur par copie
{
	int	i;

	this->_nbMateria = 0;
	i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
	i = -1;
	while (++i < copy._nbMateria)
		if (copy._inventory[i])
			this->equip(copy._inventory[i]->clone());
	this->_name = copy.getName();
	this->floor = copy.floor;
	std::cout << "Character Copy constructor called." << std::endl;
	return;
}

Character::Character(std::string name)			// constructeur by string
{
	int	i = -1;

	while (++i < 4)
		this->_inventory[i] = NULL;
	this->_nbMateria = 0;
	this->_name = name;
	this->floor = NULL;
	std::cout << "Character String constructor called." << std::endl;
	return;
}

Character::~Character(void)						// destructeur
{
	int	i = -1;

	while (++i < 4)
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	std::cout << "Character Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Character		&Character::operator=(Character const &rhs)
{
	int	i = -1;

	if (this == &rhs)
		return (*this);
	while (++i < 4)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i];
		else
			this->_inventory[i] = NULL;
	}
	this->_nbMateria = rhs._nbMateria;
	this->_name = rhs.getName();
	std::cout << "Character Assignment operator called" << std::endl;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&Character::getName() const
{
	return (this->_name);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Character::equip(AMateria *m)
{
	if (m)
	{
		if (this->_nbMateria >= 4)
		{
			std::cout << "Inventory is full" << std::endl;
			return;
		}
		else
		{
			this->_inventory[this->_nbMateria] = m;
			this->_nbMateria++;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
	 	this->floor = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_nbMateria--;	
	}
	else
	 	this->floor = NULL;		
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "* " << this->_name << " can't use a materia he doesn't possess *" << std::endl;
}
