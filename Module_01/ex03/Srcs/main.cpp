/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:42:07 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:42:11 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("morning star"); // ici on W en ref !

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club"); // ici on W en ptr !

		HumanB	jim("Jim");
		jim.attack();		// ici, le ptr est NULL, jim n'a pas d'arme !
		jim.setWeapon(club);
		jim.attack();		// ici, le ptr est a club, jim a une arme !
		club.setType("some other type of club");
		jim.attack();		// ici, le ptr est sur nv club, jim a une nvle arme !
	}
	return (0);
}
