/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:03:32 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/24 10:03:34 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

Base	*generate(void)
{
	srand(time(NULL));		// sert à initialiser le générateur de nb aleatoires utilisé par rand !
	int		r = rand() % 3;
	Base	*base = NULL;

//pour tester chaque cas :
// r = 1;
// r = 2;
// r = 3;
// r = 0;
//

	switch(r)
	{
		case 1:
			base = new A;
			std::cout << GREEN << "Tip : " << RESET << "A class has been generated" << std::endl;
			break;
		case 2:
			base = new B;
			std::cout << GREEN << "Tip : " << RESET << "B class has been generated" << std::endl;
			break;
		case 3:
			base = new C;
			std::cout << GREEN << "Tip : " << RESET << "C class has been generated" << std::endl;
			break;	
		default:
			std::cout << "Mmh... Il y a un probleme..." << std::endl;
			break;
	}
	return (base);
}

/* Le dynamic_cast a lieu lors de l'execution du prog (et non à la compilation !)
il fonctionne pour UpCast et DownCast. Identify() va verifier qu'un Downcast s'execute,
si oui : alors la Base pointée par p est une base A, B ou C */

void	identify(Base *p)
{
	std::cout << RED << "identify with pointer" << RESET << std::endl;

	if (dynamic_cast<A *>(p))
		std::cout << "Le Downcast de Base en A est possible, donc on a généré une classe A !" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Le Downcast de Base en B est possible, donc on a généré une classe B !" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Le Downcast de Base en C est possible, donc on a généré une classe C !" << std::endl;
	else
		std::cout << "Comment en est-t'on arrivé là, sérieux ?!" << std::endl;
}

void	identify(Base &p)
{
	std::cout << RED << "identify with reference" << RESET << std::endl;

	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Le Downcast de Base en A est possible, donc on a généré une classe A !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Downcast impossible, ce n'est pas une classe A !" << std::endl;
	}

	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Le Downcast de Base en B est possible, donc on a généré une classe B !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Downcast impossible, ce n'est pas une classe B !" << std::endl;
	}

	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Le Downcast de Base en C est possible, donc on a généré une classe C !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Downcast impossible, ce n'est pas une classe C !" << std::endl;
	}
}

int 	main()
{
	Base	*newBase = generate();

	std::cout << std::endl;
	identify(newBase);

	std::cout << std::endl;
	if (newBase)
		identify(*newBase);
	else
		std::cout << RED << "identify with reference" << RESET << std::endl << "Mais c'est n'importe quoi !!" << std::endl;

	delete newBase;

	return (0);
}
