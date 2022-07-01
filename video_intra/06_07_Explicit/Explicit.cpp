/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Explicit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:20:27 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 11:20:30 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A	{};
class B	{};

class C // que l'on constuise C avec A ou B, on obtient bien un type C
{
	public:
					C( A const & _ )	{ return; }		// ceci est un constructeur qui prend ref sur classe A
		explicit	C( B const & _ )	{ return; }		// constructeur qui prend ref sur classe B
	//		|-> interdit la construction implicite d'une instance !
};

void	f( C const & _ )
{
	return;
}

int main(void)
{
	f( A() );	// Implicit conversion -> OK
	f( B() );	// Implicit conversion -> NO ! car constructeur is EXPLICIT
				// donc il faut imperativement construire une instance avant de la passer en parametre...

	return (0);
}