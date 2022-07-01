/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:12:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 17:12:05 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "ClassTest.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

//----------   MAIN DE CORRECTION   ----------//

// class Awesome
// {
// 	public :
// 		Awesome( void ) : _n(42) { return; }
// 		int get( void ) const { return this->_n; }
// 	private :
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template<typename T>
// void print( T const & x ) { std::cout << x << std::endl; return; }

// template<typename T>
// void plusOne( T & x ) { std::cout << x + 1 << std::endl; return; }

// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	iter(tab, 5, plusOne);

// 	return 0;
// }

//----------   MAIN EXTENDED   ----------//

int main( void )
{
	std::cout << RED << "--- Int array ---" << RESET << std::endl << std::endl;
	size_t		intSize = 3;
	int			intTab[] = {12, 24, 48};
	// size_t		i;

	// // Set int array at 0
	// i = 0;
	// while (i < intSize)
	// 	intTab[i++] = 0;
	
	std::cout << YELLOW << "test diffTo42" << RESET << std::endl;
	iter(intTab, intSize, diffTo42);
	std::cout << std::endl;

	std::cout << YELLOW << "test printDouble" << RESET << std::endl;
	iter(intTab, intSize, printDouble);
	std::cout << std::endl;		


	std::cout << RED << "--- String array ---" << RESET << std::endl << std::endl;
	size_t			strSize = 4;
	std::string		strTab[] = {"Hello", "Bonjour", "Salut", "Coucou"};
	//std::string		*strTab = new std::string[strSize];

	// Set string Tab as alphabet
	// i = 0;
	// while (i < strSize)
	// {
	// 	strTab[i] = 65 + i;
	// 	i++;	
	// }

	std::cout << YELLOW << "test addSuffixe" << RESET << std::endl;
	iter(strTab, strSize, addSuffixe);
	std::cout << std::endl;

	std::cout << YELLOW << "test printDouble" << RESET << std::endl;
	iter(strTab, strSize, printDouble);
	std::cout << std::endl;		



	std::cout  << RED << "--- Class array ---" << RESET << std::endl << std::endl;
	size_t		classSize = 5;
	Classtest	classTab[classSize];
	
	// Set class array at 0
	// i = 0;
	// while (i < classSize)
	// {
	// 	classTab[i].setN(i);
	// 	i++;
	// }

	std::cout << std::endl << YELLOW << "test printSquare" << RESET << std::endl;	
	iter(classTab, classSize, printSquare);
	std::cout << std::endl;

	std::cout << YELLOW << "test printDouble" << RESET << std::endl;
	iter(classTab, classSize, printDouble);
	std::cout << std::endl;

	return (0);
}
