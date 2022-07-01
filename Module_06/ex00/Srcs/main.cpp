/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:22:23 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 14:22:28 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please check your arguments" << std::endl;
		return (0);
	}
	
	char *ptr = NULL;
	strtod(av[1], &ptr);
	if (*ptr != '\0' && *ptr != 'f')
	{
		std::cout << "Wrong argument." << std::endl;
		return (0);
	}
		


	Convertor	input;
	std::cout << std::endl;
	try
	{
		input.analyseType(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		input.print(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
