/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:27:25 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/27 14:27:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>

class NotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Value has not been found in this container...");
		}
};

template< typename T >
typename T::iterator	easyfind( T &container, int val )
{
	typename T::iterator	ret_val;
	
	ret_val = find(container.begin(), container.end(), val);
	if (ret_val == container.end())// && *container.end() != val)
		throw (NotFound());
	return (ret_val);
}
