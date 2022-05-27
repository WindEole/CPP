/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:51:10 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/25 14:51:18 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	size_t	i;
	int		x = 0;

	if (ac > 1)
	{
		while (++x < ac)
		{
			i = -1;
			while (++i < strlen(av[x]))
				std::cout << (char)toupper(av[x][i]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
