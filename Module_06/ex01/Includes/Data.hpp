/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:38:05 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 21:38:07 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h>

typedef struct Data
{
	char	c;
	int		x;
}	Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
