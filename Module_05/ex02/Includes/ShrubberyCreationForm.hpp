/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:13 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 15:59:16 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include "AForm.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class ShrubberyCreationForm : public AForm							// classe heritiere
{
	private :
		std::string const		_target;

	public :
		ShrubberyCreationForm(void);								// constructeur par défaut
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);	// constructeur par copie
		ShrubberyCreationForm(std::string const target);			// constructeur by string
		virtual ~ShrubberyCreationForm(void);						// destructeur

		ShrubberyCreationForm 	&operator=(ShrubberyCreationForm const &rhs);		// surcharge d'assignation

		std::string const		&getName(void) const;
		virtual void			execute(Bureaucrat const &executor) const;
};
