/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:35:16 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 16:35:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstring>
# include <iostream>
# include <iomanip>

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		
		void	getInfo(int i);
		void	display_tab(void) const;
		bool	exists(void) const;
		void	print_contact(void);
	
	private:

		int			_index;
		bool		_turnover;
		std::string	_Firstname;
		std::string	_Lastname;
		std::string	_Nickname;
		std::string	_Phonenb;
		std::string	_Darkest;
		
		void	_print_info(std::string str) const;
};

#endif
