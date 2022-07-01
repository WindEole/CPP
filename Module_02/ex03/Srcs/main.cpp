/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:52:47 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 15:52:51 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35"
#define CYAN "\e[0;36m"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	std::cout << RED"ABC triangle coordinates : A(0,0) / B(5,0) / C(0,5)"RESET << std::endl << std::endl;
	{
		Point	a(0, 0);
		Point	b(5, 0);
		Point	c(0, 5);
		Point	point(2, 2);

		// ici le point est a l'interieur du triangle
		if (bsp(a, b, c, point))
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(5, 0);
		Point	c(0, 5);
		Point	point(5, 5);

		// ici le point est a l'exterieur du triangle
		if (bsp(a, b, c, point))
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(5, 0);
		Point	c(0, 5);
		Point	point(0, 5);

		// ici le point est sur l'un des sommets du triangle (donc exterieur !)
		if (bsp(a, b, c, point))
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(5, 0);
		Point	c(0, 5);
		Point	point(1, 4);

		// ici le point est sur l'arrete du triangle (donc exterieur !)
		if (bsp(a, b, c, point))
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(5, 0);
		Point	c(0, 5);
		Point	point(3, 1);

		// ici le point est sur l'arrete du triangle (donc exterieur !)
		if (bsp(a, b, c, point))
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << point.get_x() << " / y: " << point.get_y() << " is not in the triangle" << std::endl;
	}	
	return (0);
}
