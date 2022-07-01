/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:34 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 15:59:38 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include "AForm.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class RobotomyRequestForm : public AForm						// classe derivee
{
	private :
		std::string const		_target;

	public :
		RobotomyRequestForm(void);								// constructeur par défaut
		RobotomyRequestForm(RobotomyRequestForm const &copy);	// constructeur par copie
		RobotomyRequestForm(std::string const target);			// constructeur by string
		virtual ~RobotomyRequestForm(void);								// destructeur

		RobotomyRequestForm 	&operator=(RobotomyRequestForm const &rhs);		// surcharge d'assignation

		std::string const		&getName(void) const;
		virtual void			execute(Bureaucrat const &executor) const;
};
