/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:52:29 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 17:52:36 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie	*zb;
	int		N = 4; // a modifier si on veut !
	int		i = -1;

	zb = zombieHorde(N, "Zombifidus Actif");
	while (++i < N)
		zb[i].announce();

	delete [] zb;
	return (0);
}
