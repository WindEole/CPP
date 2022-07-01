/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:31:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 15:31:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
//    std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "The zombie " << this->_name << " has been put to rest" << std::endl;
}

void    Zombie::announce() const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}