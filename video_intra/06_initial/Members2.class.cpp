/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Members2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:50:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:50:27 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Members2.class.hpp"

// ici on fait une initialisation concise !!!

Members2::Members2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1:" << this->a1 << std::endl;
	std::cout << "this->a2:" << this->a2 << std::endl;
	std::cout << "this->a3:" << this->a3 << std::endl;
}

Members2::~Members2(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// void	Members::fct(void)
// {
// 	std::cout << "Member function fct called" << std::endl;
// 	return;
// }