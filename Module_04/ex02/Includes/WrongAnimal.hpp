/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:58:52 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 10:58:54 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class WrongAnimal											// classe mere
{
	public:
		WrongAnimal(void);						// constructeur par defaut
		WrongAnimal(WrongAnimal const & ref);	// constructeur par copie
		virtual ~WrongAnimal(void);				// destructeur

		WrongAnimal		&operator=(WrongAnimal const & rhs);	// surcharge d'assignation
	
		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:
		std::string		_type;
};
