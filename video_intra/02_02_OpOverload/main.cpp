/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:03:14 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/08 13:03:16 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int	main()
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of x : " << x << std::endl << std::endl;

	std::cout << "Value of y : " << y << std::endl;
	y = Integer(12); // on appelle la surcharge de l'operator d'assignation
	std::cout << "Value of y : " << y << std::endl << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return (0);
}
