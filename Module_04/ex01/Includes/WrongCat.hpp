/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:59:06 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 10:59:08 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "WrongAnimal.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class WrongCat : virtual public WrongAnimal		// classe heritiere
{
	public:
		WrongCat(void);						// constructeur par defaut
		WrongCat(WrongCat const & ref);			// constructeur par copie
		virtual ~WrongCat(void);			// destructeur

		WrongCat	&operator=(WrongCat const & rhs);	// surcharge d'assignation

		void	makeSound(void) const;
};
