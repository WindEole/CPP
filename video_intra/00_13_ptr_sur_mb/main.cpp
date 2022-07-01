/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:15:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 11:15:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Member.class.hpp"

int	main()
{
	Member		instance;
	Member *	instancep = &instance;	// declaration de pointeur, avec pour 
										// valeur l'adresse d'une autre variable

	int			Member::*p = NULL;	// pointeur sur un int de ma class Member !
	void		(Member::*f)(void) const;

	p = &Member::var; // ici, j'assigne l'adresse de mon mb var a mon ptr

	std::cout << "value of member var : " << instance.var << std::endl;
	instance.*p = 21;
	std::cout << "value of member var : " << instance.var << std::endl;
	instancep->*p = 42;
	std::cout << "value of member var : " << instance.var << std::endl;

	f = &Member::fct;	// mon ptr f va pointer vers ma fct Member

	(instance.*f)();
	(instancep->*f)();

	return 0;
}
