/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpDownCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:04:00 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/22 18:04:04 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent				{};
class Child1: public Parent	{};
class Child2: public Parent	{};

int 	main(void)
{
	Child1 		a;						// reference value

	Parent 		*b = &a;				// Implicit reinterpretation cast
	Parent 		*c = (Parent *) &a;		// Explicit reinterpretation cast 
				//		|-> ATTENTION ceci est une syntaxe du langage C ! on modifiera
				//						par la suite avec du c++ !					

	Parent 		*d = &a;				// Implicit upcast 		-> OK !
//	Child1 		*e = d;					// Implicit downcast 	-> NO ! ne compile pas.
	Child2 		*f = (Child2 *)d;		// Explicit downcast 	-> Bonne pratique !
				//		|-> PB on voulait caster le d en Child1 ! ici la compilation fct
				//				mais le programme ne fera pas ce qu'on veut ! 

	return (0);
}
