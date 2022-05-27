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
	Member inst1(42);	// ces 2 variables n'ont pas la meme adresse
	Member inst2(42);	// mais le meme contenu !

	if (&inst1 == &inst1) // compile with flag -Wno-error !!
		std::cout << "inst1 & inst1 are physically equal" << std::endl;
	else
		std::cout << "inst1 & inst1 are not physically equal" << std::endl;
	
	if (&inst1 == &inst2)
		std::cout << "inst1 & inst2 are physically equal" << std::endl;
	else
		std::cout << "inst1 & inst2 are not physically equal" << std::endl;
	

	if (inst1.compare(&inst1) == 0)
		std::cout << "inst1 & inst1 are structurally equal" << std::endl;
	else
		std::cout << "inst1 & inst1 are not srtucturally equal" << std::endl;
	
	if (inst1.compare(&inst2) == 0)
		std::cout << "inst1 & inst2 are structurally equal" << std::endl;
	else
		std::cout << "inst1 & inst2 are not structurally equal" << std::endl;
		
	return 0;
}
