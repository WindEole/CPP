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

Member::Member(float const f) : pi(f), i1(42)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Member::fct(void) const // ici
{
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->i1: " << this->i1 << std::endl;

	return;
}