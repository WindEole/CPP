/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:13:38 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 18:13:42 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(void) : _turnover(false)
{
//	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::getInfo(int i)
{
	int				j;
	std::string		entry = "";
	std::string		entry_names[5] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Phone Number",
		"Darkest Secret",
	};
		
	std::cout << std::endl << "New entry. Please enter informations." << std::endl << std::endl;
	this->_index = i + 1;
	this->_turnover = true;
	j = -1;
	while (++j < 5)
	{
		entry = "";
		std::cout << entry_names[j] << " > ";
		std::getline(std::cin, entry);
		if (j == 0)
			this->_Firstname = entry;
		if (j == 1)
			this->_Lastname = entry;
		if (j == 2)
			this->_Nickname = entry;
		if (j == 3)
			this->_Phonenb = entry;
		if (j == 4)
			this->_Darkest = entry;
		if (std::cin.eof())
			break ;
	}
	if (j == 5)
	{
		std::cout << std::endl << "The entry has been successfully created.\n";
		std::cout << "What do you want to do next ? (ADD, SEARCH, EXIT)\n> ";
	}
}

void	Contact::display_tab(void) const
{
	std::cout << "|" << std::setw(10) << this->_index << "|";
	this->_print_info(this->_Firstname);
	std::cout << "|";
	this->_print_info(this->_Lastname);
	std::cout << "|";
	this->_print_info(this->_Nickname);
	std::cout << "|" << std::endl;
}

void	Contact::_print_info(std::string str) const
{
	int	len;

	len = str.length();
	if (len == 10)
		std::cout << str;
	else if (len < 10)
	{
		len = 10 - len;
		while (len--)
			std::cout << " ";
		std::cout << str;
	}
	else if (len > 10)
	{
		len = -1;
		while (++len < 9)
			std::cout << str[len];
		std::cout << ".";
	}
}

void	Contact::print_contact(void)
{
	std::cout << "First name		: " << this->_Firstname << std::endl;
	std::cout << "Last name		: " << this->_Lastname << std::endl;
	std::cout << "Nickname		: " << this->_Nickname << std::endl;
	std::cout << "Phone number		: " << this->_Phonenb << std::endl;
	std::cout << "Darkest secret		: " << this->_Darkest << std::endl;
	std::cout << "\nWhat do you want to do next ? (ADD, SEARCH, EXIT)\n> ";
}

bool	Contact::exists(void) const
{
	return (Contact::_turnover);
}
