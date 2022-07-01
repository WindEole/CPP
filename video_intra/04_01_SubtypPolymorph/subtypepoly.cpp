/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtypepoly.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:38:43 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 10:38:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
	public:
		Character();
		~Character();
		virtual void sayHello(std::string const &target);
};

class Warrior : public Character
{
	public:
		Warrior();
		~Warrior();
		virtual void sayHello(std::string const &target);
};

class Cat
{
	//[...];
};

Character::Character()
{
	return;
}

Character::~Character()
{
	return;
}

Warrior::Warrior()
{
	return;
}

Warrior::~Warrior()
{
	return;
}

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << " , I don't like you !" << std::endl;
}

int	main()
{
	Warrior		*a = new Warrior();		// OK car Warrior IS a Warrior
	Character	*b = new Warrior();		// OK aussi car Warrior IS a Character
//	Warrior		*c = new Character();	// NOT OK car Character IS NOT a Warrior
//	Character	*d = new Cat();			// NOT OK car Cat IS NOT a Character

	a->sayHello("students");	//-> va donner le Hello du Warrior
	b->sayHello("students"); 	//-> va donner le sayHello du Character
}
