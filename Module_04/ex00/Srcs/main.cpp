/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:44:52 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:44:54 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35"
#define CYAN "\e[0;36m"

//----------------------------   MAIN DU SUJET   -----------------------------//

int main()
{
	std::cout << std::endl << RED << "test du sujet" << RESET << std::endl;	
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const WrongAnimal	*wa = new WrongAnimal();
	const WrongAnimal	*wcat1 = new WrongCat();
	const WrongCat		*wcat2 = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	std::cout << std::endl;
	wa->makeSound();
	wcat1->makeSound();
	wcat2->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;
	delete wa;
	delete wcat1;
	delete wcat2;
	
	return 0;
}

//----------------------------   MAIN EXTENDED   -----------------------------//

// int	main(void)
// {
// 	{
// 		std::cout << std::endl << RED << "test Animal" << RESET << std::endl;
// 		Animal		*Otter = new Animal;
	
// 		Otter->makeSound();
// 		delete Otter;
// 	}
// 	{
// 		std::cout << std::endl << RED << "test Animal & Cat" << RESET << std::endl;	
// 		Animal		*Otter = new Animal;
// 		Cat			*Norminet = new Cat;
// 		Animal		*Grosminet = new Cat;

// 		std::cout << std::endl;
// 		Otter->makeSound();
// 		Norminet->makeSound();
// 		Grosminet->makeSound();
// 		std::cout << std::endl;

// 		delete Grosminet;
// 		delete Norminet;
// 		delete Otter;
// 	}
// 	{
// 		std::cout << std::endl << RED << "test Animal, Cat & Dog" << RESET << std::endl;	
// 		Animal		*Otter = new Animal;
// 		Cat			*Norminet = new Cat;
// 		Animal		*Grosminet = new Cat;
// 		Dog			*Oulet = new Dog;
// 		Animal		*Rantanplan = new Dog;

// 		std::cout << std::endl;
// 		Otter->makeSound();
// 		Norminet->makeSound();
// 		Grosminet->makeSound();
// 		Oulet->makeSound();
// 		Rantanplan->makeSound();
// 		std::cout << std::endl;

// 		delete Grosminet;
// 		delete Norminet;
// 		delete Otter;
// 		delete Oulet;
// 		delete Rantanplan;
// 	}
// 	{
// 		std::cout << std::endl << RED << "test WrongAnimal & WrongCat" << RESET << std::endl;	
// 		WrongAnimal		*Pony = new WrongAnimal;
// 		WrongCat		*Raminagrobis = new WrongCat;
// 		WrongAnimal		*Vermithrax = new WrongCat;
	
// 		std::cout << std::endl;
// 		Pony->makeSound();
// 		Raminagrobis->makeSound();
// 		Vermithrax->makeSound();
// 		std::cout << std::endl;

// 		delete Vermithrax;
// 		delete Raminagrobis;
// 		delete Pony;
// 	}
// 	return (0);
// }
