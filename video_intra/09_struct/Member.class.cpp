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

	this->var = 666;
	std::cout << "this->var: " << this->var << std::endl;

	this->fct();

	return;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Member::fct(void) const
{
	std::cout << "class function fct called" << std::endl;

	return;
}
