/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:12:59 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 16:13:02 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// BSP = Binary Space Partitioning

Fixed	abs(Fixed surf) // sert a retourner la valeur absolue (passe les neg en pos)
{
	if (surf < Fixed(0))
		return (Fixed(surf.toFloat() * -1));
	return (surf);
}

Fixed	Surface(Point p1, Point p2, Point p3) // calcul de la surface d'un triangle
{
	Fixed	surface;
//	Fixed	two(2);

//	surface = (x1(y2-y3) + x2(y3 - y1) + x3(y1 - y2)) / 2;
	surface = ((p1.get_x() * (p2.get_y() - p3.get_y())) + (p2.get_x() * (p3.get_y() - p1.get_y())) + (p3.get_x() * (p1.get_y() - p2.get_y()))) / 2 ; 
	return (surface);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area_triangle;
	Fixed	area_pa;
	Fixed	area_pb;
	Fixed	area_pc;

	area_triangle = abs(Surface(a, b, c));
	area_pa = abs(Surface(point, b, c));
	area_pb = abs(Surface(a, point, c));
	area_pc = abs(Surface(a, b, point));

	if ((area_pa + area_pb + area_pc) > area_triangle || area_pa == 0 || area_pb == 0 || area_pc == 0)
		return (false);
	else
		return(true);
}

