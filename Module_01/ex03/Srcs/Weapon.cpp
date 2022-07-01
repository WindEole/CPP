/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:41:49 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:41:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string	const &Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}