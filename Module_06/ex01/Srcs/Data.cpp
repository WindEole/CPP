/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:38:21 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 21:38:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	i;

	i = reinterpret_cast<uintptr_t>(ptr);
	return (i);
}

Data	*deserialize(uintptr_t raw)
{
	Data		*newptr;

	newptr = reinterpret_cast<Data *>(raw);
	return (newptr);
}
