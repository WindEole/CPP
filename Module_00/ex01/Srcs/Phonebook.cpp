/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:31:45 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:31:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
//	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::welcome(void)
{
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|=====      MY AWESOME PHONEBOOK !     =====|" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|=====   The available entries are :   =====|" << std::endl;
	std::cout << "| - ADD (to add a contact)                  |" << std::endl;
	std::cout << "| - SEARCH (to browse your contacts)        |" << std::endl;
	std::cout << "| - EXIT to exit.                           |" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	std::cout << "> ";

	return;
}

int		PhoneBook::addContact(int i)
{
	if (std::cin.eof() == 1)
		return (0);
	this->contacts[i].getInfo(i);
	return (1);
}

int		PhoneBook::print_chosen_index()
{
	std::string			entry;
	std::stringstream	ss;
	int					index;

	std::cout << "|===========================================|" << std::endl;
	std::cout << "Please enter the contact's index to get his informations\n> ";
	getline(std::cin, entry);
	if (std::cin.eof() == 1)
		return (0);
	if (entry.length() != 1)
		return (-1);
	index = 0;
	ss << entry;
	ss >> index;
	if (index < 0 || index > 8 || !contacts[index - 1].exists())
		return (-1);
	contacts[index - 1].print_contact();
	return (1);
}

int		PhoneBook::searchContact(void)
{
	int	j;
	int	ret;
	
	if (!this->contacts[0].exists())
	{
		std::cout << "Please add a contact before searching.\n> ";
		return (1);
	}
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	j = -1;
	while (++j < 8 && this->contacts[j].exists())
		this->contacts[j].display_tab();
	if (j > 0)
	{
		ret = print_chosen_index();
		if (ret == -1)
		{
			std::cout << "This entry is wrong, what do you want to do now ? (ADD, SEARCH, EXIT)\n> ";
			return(1);
		}
		else if (!ret)
			return (0);
	}
	return(1);
}
