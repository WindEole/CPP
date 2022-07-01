/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:49:50 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 10:49:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
		ScavTrap	Batman("Batman");
		ScavTrap	Robin("Robin");

		std::cout << std::endl;
		Dovahkiin.attack(Nobody.getName());
		Dovahkiin.attack(Voldemort.getName());
		std::cout << std::endl;
		Batman.attack(Nobody.getName());
		Batman.attack(Voldemort.getName());
		Batman.attack(Dovahkiin.getName());
		std::cout << std::endl;
		Robin.attack(Nobody.getName());
		Robin.attack(Voldemort.getName());
		Robin.attack(Dovahkiin.getName());
		Robin.attack(Batman.getName());
		std::cout << std::endl;
		// int	i = -1;
		// while (++i < 50)
		// 	Robin.attack(Batman.getName());
		// std::cout << std::endl;
	}
	{
		std::cout << std::endl << RED << "test takeDamage function" << RESET << std::endl;
		
		ClapTrap	Dovahkiin("Dovahkiin");
		ScavTrap	Batman("Batman");
	
		std::cout << std::endl;
		Dovahkiin.takeDamage(1);
		Dovahkiin.takeDamage(3);
		Dovahkiin.takeDamage(3);
		Dovahkiin.takeDamage(5);
		Dovahkiin.takeDamage(2);
		std::cout << std::endl;
		Batman.takeDamage(10);
		Batman.takeDamage(20);
		Batman.takeDamage(30);
		Batman.takeDamage(50);
		Batman.takeDamage(20);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << RED << "test beRepaired function" << RESET << std::endl;
		
		ClapTrap	Dovahkiin("Dovahkiin");
		ScavTrap	Robin("Robin");
		int			i;

		std::cout << std::endl;
		Dovahkiin.takeDamage(5);
		Dovahkiin.beRepaired(2);
		Dovahkiin.takeDamage(5);
		i = -1;
		while (++i < 10)
			Dovahkiin.beRepaired(1);
		Dovahkiin.takeDamage(12);
		Dovahkiin.takeDamage(12);
		Dovahkiin.beRepaired(12);
		std::cout << std::endl;
		Robin.takeDamage(50);
		Robin.beRepaired(20);
		Robin.takeDamage(50);
		i = -1;
		while (++i < 10)
			Robin.beRepaired(10);
		Robin.takeDamage(120);
		Robin.takeDamage(120);
		Robin.beRepaired(120);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << RED << "test guardGate function" << RESET << std::endl;
	//	ClapTrap	Dovahkiin("Dovahkiin");
		ScavTrap	Cicero("Cicero");
	
	//	std::cout << std::endl;
	//	Dovahkiin.guardGate();
		std::cout << std::endl;
		Cicero.guardGate();
		Cicero.takeDamage(120);
		Cicero.guardGate();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << GREEN << "test highFiveGuys function" << RESET << std::endl;
	
		ClapTrap	Dovahkiin("Dovahkiin");
		ScavTrap	Batman("Batman");
		FragTrap	Snoopy("Snoopy");

		std::cout << std::endl;
		Dovahkiin.attack(Batman.getName());
		Batman.takeDamage(30);
		Batman.beRepaired(20);
		Batman.guardGate();
		Dovahkiin.attack(Snoopy.getName());
		Snoopy.highFivesGuys();
		std::cout << std::endl;
		Snoopy.attack(Batman.getName());
		Snoopy.takeDamage(60);
		Snoopy.beRepaired(70);
		Snoopy.highFivesGuys();
		Snoopy.takeDamage(125);
		Snoopy.beRepaired(10);
		Snoopy.highFivesGuys();
		std::cout << std::endl;
	}
	return (0);
}
