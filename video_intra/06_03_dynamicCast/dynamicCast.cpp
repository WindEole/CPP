/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamicCast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:41:20 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 09:41:24 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent 				{public: virtual ~Parent(void) {} };
	// La presence d'une fct virtuelle (=METHODE) dans le parent permet d'utiliser
	// plus loin le dynamic cast -> active le runtype type info (rtti)
class Child1: public Parent	{};
class Child2: public Parent	{};

int	main(void)
{
	Child1 		a;				//Reference value
	Parent 		*b = &a;		//Implicit upcast -> OK

// Explicit downcast 
	Child1		*c = dynamic_cast<Child1 *>(b);		//-> dynamic cast par pointeur !
	if (c == NULL)		//-> en ptr, dynamic_cast renvoie NULL si la conversion n'est pas possible !
		std::cout << "Conversion is NOT ok" << std::endl;
	else
		std::cout << "Conversion is ok" << std::endl;

// Explicit downcast -> compile avec le flag -Wno-unused !
	try
	{
		Child2 	&d = dynamic_cast<Child2 &>(*b);	//-> dynamic cast par reference !
							//		\-> ici conversion horizontale, c'est cense echouer ! (car le type reel ici est Child 1)
		std::cout << "Conversion is OK" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT ok : " << bc.what() << std::endl;
		return (0); 
	}
}
