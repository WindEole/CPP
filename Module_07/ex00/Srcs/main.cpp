/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:46:22 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 16:46:25 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templatefct.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << RED << "Données => int : a = " << a << ", b = " << b << RESET << std::endl << std::endl;
	::swap( a, b );
	std::cout << "swap : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

//------//

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << RED << "Données => string : c = " << c << ", d = " << d << RESET << std::endl << std::endl;
	::swap(c, d);
	std::cout << "swap : c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

//------//

	float e = 420.024f;
	float f = 3.14f;

	std::cout << RED << "Données => float : e = " << e << ", f = " << f << RESET << std::endl << std::endl;
	::swap( e, f );
	std::cout << "swap : e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	return (0);
}
