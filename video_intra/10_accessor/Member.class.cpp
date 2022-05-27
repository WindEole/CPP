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

	this->setVar(0);
	std::cout << "this->getVar(): " << this->getVar() << std::endl;

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

void	Member::setVar(int v) // ici on pourrait retourner un booleen pour
// indiquer a l'utilisateur que sa modif a ete prise en compte.
{
	if (v >= 0)
		this->_var = v;

	return;
}