/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:08:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 14:08:51 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter a level of complaint : debug, info, warning, error..." << std::endl;
		return (1);
	}

	std::string	str(av[1]);
	if (str != "debug" && str != "info" && str != "warning" && str != "error")
	{
		std::cout << "Please check the parameter" << std::endl;
		return (1);
	}

	Harl    complains;
	complains.complain(str);
	return (0);
}
