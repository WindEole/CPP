/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:46:20 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 12:46:23 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
L'interet du du point fixe en binaire (par rapport a la virgule flottante) c'est
la rapidite d'execution du code... En effet le point fixe va utiliser le code prevu
pour les Int, on va juste ajouter un point a la fin (=Int) qu'on va deplacer vers
la gauche pour avoir le nb reel. Meilleures perf, mais perte en precision !
*/
/*
Accuracy = justesse, exactitude -> how close a measurement is to the true value
	Integer is accurate : 2 = 2, 2 + 1 = 3
	Float is not accurate
Precision = precision -> how much information you have about a quantity, how uniquely you have it pinned down.
	Integer is not precise : 4 / 2 = 2 but 5 / 2 = 2 too...
	Float is precise
*/

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
