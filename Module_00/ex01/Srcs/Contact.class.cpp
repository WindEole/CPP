/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:13:38 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/27 18:13:42 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H   

#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;

	// this->addcontact(int i);
	// this->searchcontact(void) const;

	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::setInfo(int i)
{

}

#endif
