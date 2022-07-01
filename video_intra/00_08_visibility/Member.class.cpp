/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Member.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:50:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:50:27 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Member.class.hpp"

Member::Member(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicvar = 0;
	std::cout << "this->publicvar: " << this->publicvar << std::endl;

	this->_privatevar = 0;
	std::cout << "this->privatevar: " << this->_privatevar << std::endl;

	this->publicfct();
	this->_privatefct();

	return;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Member::publicfct(void) const
{
	std::cout << "class fct publicfct called" << std::endl;

	return;
}

void	Member::_privatefct(void) const
{
	std::cout << "class fct _privatefct called" << std::endl;

	return;
}