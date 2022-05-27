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
#include "Member.class.hpp"

int main()
{
	Member instance;

	instance.publicvar = 42;
	std::cout << "instance publicvar: " << instance.publicvar << std::endl;

	// instance._privatevar = 42; // INTERDIT
	// std::cout << "instance _privatevar: " << instance._privatevar << std::endl;

	instance.publicfct();
	// instance._privatefct(); // INTERDIT

	return 0;
}
