/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:31:56 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 15:31:59 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie;
    zombie = new Zombie(name);

    return (zombie);
}