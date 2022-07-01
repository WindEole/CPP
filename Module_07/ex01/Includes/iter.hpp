/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:11:31 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 17:11:33 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template< typename T >
void	iter( T* tab, size_t size_tab, void (*fct)(T const &) )
{
	size_t	i = -1;

	while (++i < size_tab)
		fct(tab[i]);
	return;
}

template < typename T >
void diffTo42(T const & value)			// fonctionne sur int
{
	std::cout << 42 - value << std::endl;
}

template < typename T >					// fonctionne sur string
void addSuffixe(T const & value)
{
	std::cout << value + " Student !" << std::endl;
}

template < typename T > 				// fonctionne sur Class (appel a getN)
void printSquare(T const & value)
{
	std::cout << value.getN() * value.getN() << std::endl;
}

template < typename T >					// foncttionne sur int / string / Class
void printDouble(T const & value)
{
	std::cout << value << value << std::endl;
}