/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:38:29 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 13:38:31 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal	// Classe generale
{
	private:
		int		_numberOfLegs;

	public:
		Animal();
		Animal(Animal const &);
		Animal &operator=(Animal const &);
		~Animal();

		void	run(int distance);
		void	call();
		void	eat(std::string const & what);
		void	walk(int distance);
};

class Cat : public Animal 		// ATTENTION : ici on herite de public, mais on peut aussi 
{												//avoir private ou protected 
	public:
		Cat();
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();

		void	scornSomeone(std::string const & target);
};

class Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony &operator=(Pony const &);
		~Pony();

		void	doMagic(std::string const & target);
};

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &);
		Dog &operator=(Dog const &);
		~Dog();

		void	barkPlayfully(std::string const & target);
};
