/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:36:29 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 15:36:32 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	//***** no malloc						--> sur la heap (pile) ! *****//
	std::cout << "----- Constructor / Destructor -----" << std::endl;
	Zombie	varzombie = Zombie("BillCrossBie");
	varzombie.announce();
	
	//***** malloc via new, free via delete	--> sur la stack (tas) ! *****//
	std::cout << std::endl << "----- New / Delete -----" << std::endl;
	Zombie	*ptrzombie = newZombie("BarBie");
	ptrzombie->announce();
	delete ptrzombie;

	//***** init via fct non membre			--> sur la heap (pile) ! *****//
	std::cout << std::endl << "----- randomChump -----" << std::endl;
	randomChump("TeletuBie");

	return (0);
}
