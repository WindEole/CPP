/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:53:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 15:53:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
//	std::cout << "Default constructor called" << std::endl;
	this->_x = 0;
	this->_y = 0;
	return;
}

Point::Point(Point const & copy)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->_x = copy._x;
	this->_y = copy._y;
	return;
}

Point::Point(float x, float y)
{
//	std::cout << "Constructor called with 2 float parameters" << std::endl;
	this->_x = x;
	this->_y = y;
	return;
}

Point::~Point()
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

void	Point::operator=(Point const &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
}

Fixed	Point::get_x(void)
{
	return (_x);
}

Fixed	Point::get_y(void)
{
	return(_y);
}
