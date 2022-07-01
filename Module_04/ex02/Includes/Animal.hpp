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

class AAnimal											// classe mere
{
	public:
		AAnimal(void);						// constructeur par defaut
		AAnimal(AAnimal const & ref);		// constructeur par copie
		virtual ~AAnimal(void);				// destructeur

		AAnimal			&operator=(AAnimal const & rhs);	// surcharge d'assignation
	
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string		_type;
};
