/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:46:35 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 16:46:38 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sednomore.hpp"

int	main(int ac, char **av)
{
	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "Please check the parameters !" << std::endl;
		return (1);
	}
	Sednomore	noSed(av[1], av[2], av[3]);
	noSed.replaceStr();
	return (0);
}
