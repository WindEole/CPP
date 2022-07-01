/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:26:01 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 13:26:04 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

/*
Cat, Pony, Dog... partage des attributs similaires (nb de pattes) et des
comportements similaires (ils peuvent tous courrir). On peut donc creer une
classe Animal qui aura ces caracteristiques et en faire heriter les classes 
Cat, Pony, Dog...
*/

class Cat
{
	private:
		int		_numberOfLegs;

	public:
		Cat();
		Cat(Cat const &);
		Cat &operator=(Cat const &);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const & target);

};

class Pony
{
	private:
		int		_numberOfLegs;

	public:
		Pony();
		Pony(Pony const &);
		Pony &operator=(Pony const &);
		~Pony();

		void	run(int distance);
		void	doMagic(std::string const & target);
};

class Dog
{
	private:
		int		_numberOfLegs;

	public:
		Dog();
		Dog(Dog const &);
		Dog &operator=(Dog const &);
		~Dog();

		void	run(int distance);
		void	barkPlayfully(std::string const & target);

};