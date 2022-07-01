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
class Unrelated 			{};

int 	main(void)
{
	Child1 		a;								// reference value

	Parent 		*b = &a;						// Implicit upcast 		-> OK !
//	Child1 		*c = b;							// Implicit downcast	-> NO !
	Child2 		*d = static_cast<Child2 *>(b);	// Explicit downcast 	-> Bonne pratique !

//	Unrelated 	*e = static_cast<Unrelated *>(&a); // Explicit conversion -> NO !

	return (0);
}
