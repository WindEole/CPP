/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:43:17 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:43:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Cat : virtual public Animal			// classe heritiere
{
	public:
		Cat(void);							// constructeur par defaut
		Cat(Cat const & ref);				// constructeur par copie
		virtual ~Cat(void);					// destructeur

		Cat	&operator=(Cat const & rhs);	// surcharge d'assignation

		void	makeSound(void) const;
};
