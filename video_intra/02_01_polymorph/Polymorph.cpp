/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:39:44 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 18:40:01 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include <iostream>

Polymorph::Polymorph()
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Polymorph::~Polymorph()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Polymorph::fctPoly(char const c) const
{
	std::cout << "Mb fct fctPoly called with char overload : " << c << std::endl;
	return;
}

void	Polymorph::fctPoly(int const n) const
{
	std::cout << "Mb fct fctPoly called with int overload : " << n << std::endl;
	return;	
}

void	Polymorph::fctPoly(float const z) const
{
	std::cout << "Mb fct fctPoly called with float overload : " << z << std::endl;
	return;	
}

void	Polymorph::fctPoly(Polymorph const &t) const
{
	std::cout << "Mb fct fctPoly called with Polymorph class overload : " << std::endl;
	return;	
}