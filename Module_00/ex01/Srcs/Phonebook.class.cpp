/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:31:45 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:31:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;

	// this->addcontact(int i);
	// this->searchcontact(void) const;

	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::welcome(void)
{
	std::cout << "MY AWESOME PHONEBOOK !" << std::endl;
	std::cout << std::endl;
	std::cout << "The available entries are :" << std::endl;
	std::cout << " - ADD (to add a contact)" << std::endl;
	std::cout << " - SEARCH (to browse your contacts)" << std::endl;
	std::cout << " - EXIT to exit." << std::endl;
	std::cout << "> ";

	return;
}

void	PhoneBook::addcontact(int i)
{
	std::cout << "class function addcontact called" << std::endl;

	return;
}

// void	PhoneBook::searchcontact(void) const
// {
// 	std::cout << "class function searchcontact called" << std::endl;
// 	return;
// }
