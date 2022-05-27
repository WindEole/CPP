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

Member::Member(int v) : _var(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Member::getVar(void) const
{
	return this->_var;
}

int	Member::compare(Member * other) const // other = instance !
{
	if (this->_var < other->getVar())
		return -1;
	else if (this->_var > other->getVar())
		return 1;

	return 0;
}
