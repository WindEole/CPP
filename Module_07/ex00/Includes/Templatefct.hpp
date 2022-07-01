/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templatefct.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:43:33 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 16:45:41 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template< typename T >
T const &	max( T const & x, T const & y )
{
	return (x > y ? x : y);
}

template< typename T >
T const &	min( T const & x, T const & y )
{
	return (x < y ? x : y);
}

template< typename T >
void	swap( T & x, T & y )
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
	return;
}