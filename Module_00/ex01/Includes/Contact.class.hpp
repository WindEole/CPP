/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:35:16 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:35:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_CLASS_H
# define Contact_CLASS_H

#include "Phonebook.class.hpp"

class Contact
{
public:

	Contact(void);
	~Contact(void);
	
	void	setInfo(int i);

private:

	int			_index;
	bool		_turnover;
	std::string	_Firstname;
	std::string	_Lastname;
	std::string	_Nickname;
	std::string	_Phonenb;
	std::string	_Darkest;


	// void	_setFirstname(void) const;
	// void	_setLastname(void) const;
	// void	_setNickname(void) const;
	// void	_setPhonenb(void) const;
	// void	_setDarkest(void) const;

//	Contact(char p1, char p2, char p3, char p4, char p5);

};

#endif
