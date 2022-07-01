/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:50:43 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 18:51:00 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

int	main()
{
	char		c = 'a';
	int			n = 42;
	float		z = 3.14;
	Polymorph	t;

	Polymorph	value;

	value.fctPoly(c);
	value.fctPoly(n);
	value.fctPoly(z);
	value.fctPoly(t);

	return (0);
}