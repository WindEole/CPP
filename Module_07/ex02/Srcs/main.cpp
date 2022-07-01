/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:27:15 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/26 15:27:18 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.tpp>
#include <cmath>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

//----------   MAIN   ----------//

int main(void)
{
	std::cout << std::endl << RED << "//----------   TYPE INT   ----------//" << RESET << std::endl;

	Array<float>	floattab(5);
	floattab[0] = 42.0f;
	floattab[1] = 24.0f;
	floattab[2] = 12.3333f;
	floattab[3] = INFINITY;
	floattab[4] = 33.8f;

	std::cout << std::endl << YELLOW <<  "creation d'un array de size 5" << RESET << std::endl;
	std::cout << GREEN << "affichage via main" << RESET << std::endl;
	unsigned int i;
	i = 0;
	while (i < floattab.size())
	{
		std::cout << "A[" << i << "] = " << floattab[i] << std::endl;	// affichage
		i++;
	}
	
	std::cout << GREEN << "affichage via fct non membre ostream" << RESET << std::endl;
	std::cout << floattab << std::endl;

	std::cout << std::endl << YELLOW << "essayons d'avoir acces au A[5]..." << RESET << std::endl;
	try
	{
		floattab[floattab.size()];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << RED << "//----------   TYPE STRING   ----------" << RESET << std::endl;

	Array<std::string>	strtab(3);
	strtab[0] = "Hello,\0";
	strtab[1] = "Bonjour !\0";
	strtab[2] = "Coucou.\0";

	std::cout << std::endl << YELLOW <<  "creation d'un array de size 3" << RESET << std::endl;
	std::cout << GREEN << "affichage via main" << RESET << std::endl;
	i = 0;
	while (i < strtab.size())
		std::cout << strtab[i++] << std::endl;
	std::cout << GREEN << "affichage via fct non membre ostream" << RESET << std::endl;
	std::cout << strtab << std::endl;

	std::cout << std::endl << YELLOW <<  "test du constructeur par copie" << RESET << std::endl;
	Array<std::string>	cpy(strtab);

	i = 0;
	while (i < strtab.size())
		std::cout << strtab[i++] << std::endl;
	
	std::cout << std::endl << RED << "//----------   TYPE BOOL   ----------" << RESET << std::endl;

	Array<bool> b(2);
	b[0] = true;
	b[1] = false;

	std::cout << std::endl << YELLOW <<  "creation d'un array de size 2" << RESET << std::endl;
	std::cout << GREEN << "affichage via main" << RESET << std::endl;
	i = 0;
	while (i < b.size())
		std::cout << b[i++] << std::endl;

	std::cout << GREEN << "affichage via fct non membre ostream" << RESET << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl << RED << "//------------   Test du Constructeur par défaut   -----------//" << RESET << std::endl;
	std::cout << std::endl << YELLOW <<  "creation d'un array NULL" << RESET << std::endl;
	Array<int> j;
	std::cout << j << std::endl;

	std::cout << std::endl << RED << "//------------   Test d'erreur   -----------//" << RESET << std::endl;
	std::cout << std::endl << YELLOW <<  "creation d'un array de size 0" << RESET << std::endl;
	try
	{
		Array<int> k(0);
		std::cout << k << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW <<  "creation d'un array de size negative" << RESET << std::endl;
	try
	{
		Array<int> k(-1);
		std::cout << k << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

//----------   MAIN DE CORRECTION   ----------//

// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int>	numbers(MAX_VAL);
// 	int* 		mirror = new int[MAX_VAL];

// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// //	std::cout << value << std::endl;
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	std::cout << "YOUPI !" << std::endl;
// 	delete [] mirror;//
// 	return 0;
// }
