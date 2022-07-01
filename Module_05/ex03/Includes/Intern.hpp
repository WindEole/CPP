/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:08:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/22 11:08:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"

class AForm;

// ATTENTION : utiliser la forme canonique de Coplien !!

class Intern									// classe concrete
{
	public :
		Intern(void);							// constructeur par défaut
		Intern(Intern const &copy);				// constructeur par copie
		~Intern(void);							// destructeur

		Intern &operator=(Intern const &rhs);	// surcharge d'assignation

		AForm		*makeForm(std::string const &form_name, std::string const &target);

		class FormNotCreated : public std::exception
		{
			public:
				virtual const char 	*what() const throw()
				{
					return ("Intern could not create Form");
				}
		};
};
