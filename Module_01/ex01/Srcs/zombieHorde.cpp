/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:52:03 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 17:52:09 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie  *horde = new Zombie[N];
    int i = -1;

    while (++i < N)
        horde[i].setName(name);

    return (horde);
}
