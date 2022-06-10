/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:06:05 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 16:06:08 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35"
#define CYAN "\e[0;36m"

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

//----------------------------   MAIN DU SUJET   -----------------------------//

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}

//----------------------------   MAIN EXTENDED   -----------------------------//

// int	main(void)
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2) );
// 	Fixed const c(42.42f);
// 	Fixed const d(b);
// 	Fixed e(c);

// 	std::cout << RED"valeurs de depart"RESET<< std::endl << std::endl;

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "e is " << e << std::endl << std::endl;

// 	std::cout << RED"comparaisons : 1 : true / 0 : false"RESET<< std::endl << std::endl;

// 	std::cout << c << " > " << b << " = " << (c > d) << std::endl;
// 	std::cout << c << " >= " << b << " = " << (c >= d) << std::endl;
// 	std::cout << c << " < " << b << " = " << (c < d) << std::endl;
// 	std::cout << c << " <= " << b << " = " << (c <= d) << std::endl;
// 	std::cout << c << " == " << b << " = " << (c == d) << std::endl;
// 	std::cout << c << " != " << b << " = " << (c != d) << std::endl << std::endl;

// 	std::cout << RED"arithmetique"RESET<< std::endl << std::endl;

// 	std::cout << c << " + " << b << " = " << (c + d) << std::endl;
// 	std::cout << c << " - " << b << " = " << (c - d) << std::endl;
// 	std::cout << c << " * " << b << " = " << (c * d) << std::endl;
// 	std::cout << c << " / " << b << " = " << (c / d) << std::endl << std::endl;

// 	std::cout << RED"incrementations/decrementations"RESET<< std::endl << std::endl;

// 	std::cout << "a = " << (a) << std::endl;
// 	std::cout << "++a = " << (++a) << std::endl;
// 	std::cout << "a = " << (a) << std::endl;
// 	std::cout << "a++ = " << (a++) << std::endl;
// 	std::cout << "a = " << (a) << std::endl;
// 	std::cout << "a-- = " << (a--) << std::endl;
// 	std::cout << "a = " << (a) << std::endl;
// 	std::cout << "--a = " << (--a) << std::endl;
// 	std::cout << "a = " << (a) << std::endl << std::endl;

// 	std::cout << RED"min/max"RESET<< std::endl << std::endl;

// 	std::cout << "max("<< a << ", " << e << ") = " << Fixed::max(a, e) << std::endl;
// 	std::cout << "min("<< a << ", " << e << ") = " << Fixed::min(a, e) << std::endl;
// 	std::cout << "(const)max("<< b << ", " << c << ") = " << Fixed::max(b, c) << std::endl;
// 	std::cout << "(const)min("<< b << ", " << c << ") = " << Fixed::min(b, c) << std::endl << std::endl;

// 	std::cout << RED"valeurs finales en int"RESET<< std::endl << std::endl;

// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl << std::endl; // ATT

// 	return (0);
// }
