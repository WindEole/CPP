/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:56 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 15:59:59 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class PresidentialPardonForm : public AForm							// classe heritiere
{
	private :
		std::string const		_target;
	
	public :
		PresidentialPardonForm(void);								// constructeur par défaut
		PresidentialPardonForm(PresidentialPardonForm const &copy);	// constructeur par copie
		PresidentialPardonForm(std::string const target);			// constructeur by string
		virtual ~PresidentialPardonForm(void);								// destructeur

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);	// surcharge d'assignation

		std::string const		&getName(void) const;
		virtual void			execute(Bureaucrat const &executor) const;
};
