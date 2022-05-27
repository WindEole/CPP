/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:32:10 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:32:22 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>
# include <cstring>

class PhoneBook
{
public:

 	PhoneBook(void);
	~PhoneBook(void);

	void	welcome(void);
	void	addcontact(int i);
//	void	searchcontact(void) const;

private:

	Contact	contacts[8];
	
};

#endif
