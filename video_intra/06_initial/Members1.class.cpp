/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Members1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:50:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:50:27 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Members1.class.hpp"

Members1::Members1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

// ici on fait une initialisation manuelle grace a this (naif mais ca marche)
	this->a1 = p1;
	std::cout << "this->a1:" << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2:" << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3:" << this->a3 << std::endl;

	return;
}

Members1::~Members1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// void	Members::fct(void)
// {
// 	std::cout << "Member function fct called" << std::endl;
// 	return;
// }