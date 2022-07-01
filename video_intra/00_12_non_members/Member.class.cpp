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
	Member::_nbInst += 1; // quand on instancie, on incremente !
	return;
}

Member::~Member(void)
{
	std::cout << "Destructor called" << std::endl;
	Member::_nbInst -= 1; // quand on detruit, on decremente !
	return;
}

int	Member::getNbInst(void)
{
	return Member::_nbInst;
}

int	Member::_nbInst = 0; // definit et initialise l'attribut non membre
