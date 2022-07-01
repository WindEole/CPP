/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:06:05 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 16:06:08 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35"
#define CYAN "\e[0;36m"

int	main(void)
{
	{
		std::cout << std::endl << RED << "test attack function" << RESET << std::endl;
		ClapTrap	Nobody;
		ClapTrap	Dovahkiin("Dovahkiin");
		ClapTrap	Voldemort("Voldemort");

		std::cout << std::endl;
		Dovahkiin.attack(Nobody.getName());
		Dovahkiin.attack(Nobody.getName());
		int	i = -1;
		while (++i < 10)
			Dovahkiin.attack(Voldemort.getName());
		std::cout << std::endl;	
	}
	{
		std::cout << std::endl << RED << "test takeDamage function" << RESET << std::endl;
		ClapTrap	Nobody;
		ClapTrap	Dovahkiin("Dovahkiin");
		ClapTrap	Voldemort("Voldemort");

		std::cout << std::endl;
		Dovahkiin.takeDamage(1);
		Dovahkiin.takeDamage(3);
		Dovahkiin.takeDamage(3);
		Dovahkiin.takeDamage(5);
		Dovahkiin.takeDamage(2);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << RED << "test beRepaired function" << RESET << std::endl;
		ClapTrap	Nobody;
		ClapTrap	Dovahkiin("Dovahkiin");
		ClapTrap	Voldemort("Voldemort");

		std::cout << std::endl;
		Dovahkiin.takeDamage(5);
		Dovahkiin.beRepaired(2);
		Dovahkiin.takeDamage(5);
		int	i = -1;
		while (++i < 10)
			Dovahkiin.beRepaired(1);
		Dovahkiin.takeDamage(12);
		Dovahkiin.takeDamage(12);
		Dovahkiin.beRepaired(12);
		std::cout << std::endl;
	}
	return (0);
}
