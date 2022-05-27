/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   members.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:50:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:50:27 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Members.class.hpp"

Members::Members(void)
{
	std::cout << "Constructor called" << std::endl;

	this->var = 42;
	std::cout << "this->var:" << this->var << std::endl;

	this->fct();
	
	return;
}

Members::~Members(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Members::fct(void)
{
	std::cout << "Member function fct called" << std::endl;
	return;
}