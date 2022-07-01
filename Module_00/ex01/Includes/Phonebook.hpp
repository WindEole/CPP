/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:32:10 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:32:22 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
public:

 	PhoneBook(void);
	~PhoneBook(void);

	void	welcome(void);
	int		addContact(int i);
	int		print_chosen_index();
	int		searchContact(void);

private:

	Contact	contacts[8];
};

#endif
