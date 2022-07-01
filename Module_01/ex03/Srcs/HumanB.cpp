/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:41:05 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:41:07 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon_type(NULL)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void    HumanB::setWeapon(Weapon &weapon)
{
   	this->_weapon_type = &weapon;
}

void	HumanB::attack() const
{
    if (this->_weapon_type)
    	std::cout << this->_name << " attacks with their " << this->_weapon_type->getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have any weapon !" << std::endl;
    return;
}
