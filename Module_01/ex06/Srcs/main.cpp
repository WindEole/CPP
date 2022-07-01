/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:20:53 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 16:21:15 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

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
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}

	HarlFilter	complains;
	complains.complain_till_the_end(str);
	return (0);
}
