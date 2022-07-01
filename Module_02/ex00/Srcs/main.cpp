/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:36:48 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/08 16:36:52 by iderighe         ###   ########.fr       */
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
	Fixed	a;		// on cree une instance a de la class Fixed
	Fixed	b(a);	// on cree une instance b, qui prend a comme param (donc b = a)
	Fixed	c;		// on cree une instance c

	c = b;			// on indique que l'instance c est egale a b

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
