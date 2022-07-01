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

#include "Phonebook.hpp"
#include "Contact.hpp"

int	main(void)
{
	int			nbc;
	PhoneBook	phonebook;
	std::string	input;

	phonebook.welcome();
	nbc = 0;
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
		{
			if (!phonebook.addContact(nbc))
			{
				std::cout << "\nTo protect privacy, all data will be erased. Goodbye !" << std::endl;
				break;
			}
			nbc++;
			if (nbc == 8)
			{
				std::cout << "You have reached the maximum number of contacts allowed. ";
				std::cout << "A new contact will replace the oldest one. \n> ";
				nbc = 0;
			}
		}
		else if (input == "SEARCH" || input == "search")
		{
			if (!phonebook.searchContact())
			{
				std::cout << "\nTo protect privacy, all data will be erased. Goodbye !" << std::endl;
				break;
			}
		}
		else if (input == "EXIT" || input == "exit" || std::cin.eof() == 1)
		{
			std::cout << "To protect privacy, all data will be erased. Goodbye !" << std::endl;
			break;
		}
	}
	return 0;
}
