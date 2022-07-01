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
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

#define N 10

int main()
{
	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		delete j;
		delete i;
	}
	{
		Animal*		tab[N];
		int 		i;



		std::cout << RED << "--- Animal tab creation ---" << RESET << std::endl;

		i = -1;
		while (++i < N)
		{
			if (i < N / 2)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
			std::cout << std::endl;
		}
		i = -1;
		while (++i < N)
			std::cout << "Type of animal number " << i << " : " << tab[i]->getType() << std::endl;		
		std::cout << std::endl;



		std::cout << RED << "--- Animal tab destruction ---" << RESET << std::endl;

		i = -1;	
		while (++i < N)
			delete tab[i];
		std::cout << std::endl;



		std::cout << RED << "--- deep copy new / delete ---" << RESET << std::endl;

		Dog			*Rantanplan = new Dog();
		Cat			*Grosminet = new Cat();

		std::cout << std::endl;
		Rantanplan->setIdeas(1, "eat and/or sleep...");
		Grosminet->setIdeas(1, "catch Titi !");
		std::cout << CYAN << "ideas Rantanplan : " << Rantanplan->getIdeas(1) << RESET << std::endl;
		std::cout << YELLOW << "ideas Grosminet : " << Grosminet->getIdeas(1) << RESET << std::endl;
		std::cout << std::endl;

		Cat			*Vermithrax = new Cat(*Grosminet);
		Dog			*Lassie = new Dog(*Rantanplan);

		std::cout << std::endl;

		std::cout << GREEN << "ideas Vermithrax : " << Vermithrax->getIdeas(1) << RESET << std::endl;
		std::cout << BLUE << "ideas Lassie : " << Lassie->getIdeas(1) << RESET << std::endl;

		std::cout << std::endl << "Setting new idea to Lassie & Vermithrax !" << std::endl;
		Lassie->setIdeas(1, "saving people");
		Vermithrax->setIdeas(1, "breathing fire !");
		std::cout << CYAN << "ideas Rantanplan : " << Rantanplan->getIdeas(1) << RESET << std::endl;
		std::cout << YELLOW << "ideas Grosminet : " << Grosminet->getIdeas(1) << RESET << std::endl;
		std::cout << GREEN << "ideas Vermithrax : " << Vermithrax->getIdeas(1) << RESET << std::endl;
		std::cout << BLUE << "ideas Lassie : " << Lassie->getIdeas(1) << RESET << std::endl;
		std::cout << std::endl;

		delete Lassie;
		delete Vermithrax;
		delete Rantanplan;
		delete Grosminet;



		std::cout << RED << "--- deep copy constructor / destructor ---" << RESET << std::endl;

		Dog		Oulet;

		std::cout << std::endl;
		Oulet.setIdeas(1, "Fleeing from 42 students.");

		Dog		SuperOulet = Oulet;

		std::cout << std::endl;	
		std::cout << CYAN << "ideas Oulet : " << Oulet.getIdeas(1) << RESET << std::endl;
		std::cout << YELLOW << "ideas SuperOulet : " << SuperOulet.getIdeas(1) << RESET << std::endl;
		
		std::cout << std::endl << "Setting new idea to SuperOulet !" << std::endl;
		SuperOulet.setIdeas(1, "Barking playfully !");
		std::cout << CYAN << "idea Oulet : " << Oulet.getIdeas(1) << RESET << std::endl;
		std::cout << YELLOW << "idea SuperOulet : " << SuperOulet.getIdeas(1) << RESET << std::endl;
		std::cout << std::endl;

		Cat		Norminet;
		
		std::cout << std::endl;
		Norminet.setIdeas(1, "Get food and caresses from 42 students.");

		Cat		SuperNorminet = Norminet;

		std::cout << std::endl;
		std::cout << GREEN << "idea Norminet : " << Norminet.getIdeas(1) << RESET << std::endl;
		std::cout << PURPLE << "idea SuperNorminet : " << SuperNorminet.getIdeas(1) << RESET << std::endl;

		std::cout << std::endl << "Setting new idea to SuperNorminet !" << std::endl;
		SuperNorminet.setIdeas(1, "Ruling the world while doing absolutely nothing !");
		std::cout << GREEN << "idea Norminet : " << Norminet.getIdeas(1) << RESET << std::endl;
		std::cout << PURPLE << "idea SuperNorminet : " << SuperNorminet.getIdeas(1) << RESET << std::endl;	
		std::cout << std::endl;
	}
	return (0);
}
