/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:42:59 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:43:02 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Animal											// classe mere
{
	public:
		Animal(void);					// constructeur par defaut
		Animal(Animal const & ref);		// constructeur par copie
		virtual ~Animal(void);			// destructeur

		Animal			&operator=(Animal const & rhs);	// surcharge d'assignation
	
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		_type;
};
