/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:27:38 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/27 14:27:43 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
# include <list>
# include <vector>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

//----------   MAIN EXTENDED   ----------//

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int		main() // essayer list/vector
{
	std::cout << std::endl << RED << "//-----   CONTAINER = LIST   -----//" << RESET << std::endl;
	try
	{
		std::list<int>	lst;
		int				i = 0;
		
		std::cout << std::endl << YELLOW << "//---   creation et affichage d'une liste d'int multiple de 3   ---//" << RESET << std::endl;

		//-----> creation de la liste
		while (i < 50)
		{
			lst.push_back(i);
			i += 3;
		}
		//-----> affichage via for_each
		
		for_each(lst.begin(), lst.end(), displayInt);

		std::cout << std::endl << YELLOW << "//---   on cherche des valeurs présentes   ---//" << RESET << std::endl;

		std::cout << *easyfind(lst, 27) << std::endl;
		std::cout << *easyfind(lst, 15) << std::endl;
		std::cout << *easyfind(lst, 0) << std::endl;

		std::cout << std::endl << YELLOW << "//---   on cherche des valeurs absentes   ---//" << RESET << std::endl;
		try
		{
			std::cout << "On cherche 7 : " << *easyfind(lst, 7) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "On cherche 40 : " << *easyfind(lst, 40) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
//--------------------//
	std::cout << std::endl << RED << "//-----   CONTAINER = VECTOR   -----//" << RESET << std::endl;
	try
	{
		std::vector<int>	vec;
		int					i = 0;
		int					j = 0;
		
		std::cout << std::endl << YELLOW << "//---   creation et affichage d'un vecteur de 10 entrées contenant des multiples de 5   ---//" << RESET << std::endl;

		//-----> creation du tableau
		while (i < 10)
		{
			vec.push_back(j);
			i++;
			j += 5;
		}
		//-----> affichage via for_each
		
		for_each(vec.begin(), vec.end(), displayInt);

		std::cout << std::endl << YELLOW << "//---   on cherche des valeurs présentes   ---//" << RESET << std::endl;

		std::cout << *easyfind(vec, 25) << std::endl;
		std::cout << *easyfind(vec, 15) << std::endl;
		std::cout << *easyfind(vec, 0) << std::endl;

		std::cout << std::endl << YELLOW << "//---   on cherche des valeurs absentes   ---//" << RESET << std::endl;
		try
		{
			std::cout << "On cherche 23 : " << *easyfind(vec, 23) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "On cherche 42 : " << *easyfind(vec, 42) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
//--------------------//
	// std::cout << std::endl << RED << "//-----   CONTAINER = DEQUE   -----//" << RESET << std::endl;
	// try
	// {
	// 	std::deque<int>		deq;
	// 	int					i = 0;
	// 	int					j = 0;
		
	// 	std::cout << std::endl << YELLOW << "//---   creation et affichage d'un vecteur de 10 entrées contenant des multiples de 5   ---//" << RESET << std::endl;

	// 	//-----> creation du tableau
	// 	while (i < 10)
	// 	{
	// 		vec.push_back(j);
	// 		i++;
	// 		j += 5;
	// 	}
	// 	//-----> affichage via for_each
		
	// 	for_each(vec.begin(), vec.end(), displayInt);

	// 	std::cout << std::endl << YELLOW << "//---   on cherche des valeurs présentes   ---//" << RESET << std::endl;

	// 	std::cout << easyfind(vec, 25) << std::endl;
	// 	std::cout << easyfind(vec, 15) << std::endl;
	// 	std::cout << easyfind(vec, 0) << std::endl;

	// 	std::cout << std::endl << YELLOW << "//---   on cherche des valeurs absentes   ---//" << RESET << std::endl;

	// 	std::cout << "On cherche 23 : " << easyfind(vec, 7) << std::endl;
	// 	std::cout << "On cherche 40 : " << easyfind(vec, 40) << std::endl;
	// 	std::cout << "On cherche 25 : " << easyfind(vec, 25) << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (0);
}
