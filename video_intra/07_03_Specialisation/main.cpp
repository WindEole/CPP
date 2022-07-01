/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:54:08 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 13:54:12 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Special.tpp"

int 	main( void )
{
	Pair< int, int >			p1( 4, 2 );	//-> template partial specialisation
	Pair< std::string, float >	p2( std::string( "Pi"), 3.14f ); //-> template generic
	Pair< float, bool >			p3( 4.2f, true ); //-> template generic
	Pair< bool, bool >			p4( true, false ); //-> template complete specialisation

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return  (0);
}
