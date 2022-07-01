/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:41:27 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:41:32 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : _name(name), _weapon_type(weapon)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon_type.getType() << std::endl;
	return;
}
