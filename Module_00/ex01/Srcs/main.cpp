/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:21:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 17:21:07 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
//#include "Contact.class.hpp"
//#include <iostream>

int	main(void)
{
	bool		nbc;
	PhoneBook	phonebook;
	std::string	input;

	phonebook.welcome();
	nbc = 0;
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phonebook.addcontact(nbc);
			nbc++;
			if (nbc == 8)
				nbc = 0;
		}
		// else if (input = "SEARCH")
		// 	//searchcontact;
		else if (input == "EXIT" || std::cin.eof() == 1)
		{
			std::cout << "To protect privacy, all data will be erased. Goodbye !" << std::endl;
			break;
		}
	}
	return 0;
}
