/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:18:13 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 11:18:15 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DefaultType.tpp"

int 	main( void )
{
	Vertex< int >	v1( 12, 23, 34 );	//-> instancie Vertex avec le type spécifié (ici : int)
	Vertex<>		v2( 12, 23, 34 );	//-> instancie Vertex avec son type par défaut (donc float...)
					//		|-> ce sont des int, mais ils seront implicitement convertis en float !

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}
