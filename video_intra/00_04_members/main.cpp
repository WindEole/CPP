/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:15:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 11:15:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Members.class.hpp"

int main()
{
	Members	variable;

	variable.var = 42;
	std::cout << "variable.var:" << variable.var << std::endl;

	variable.fct();

	return 0;
}
