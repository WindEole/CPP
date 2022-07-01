/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:43:33 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:43:35 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Dog : public Animal					// classe heritiere
{
	public:
		Dog(void);							// constructeur par defaut
		Dog(Dog const & ref);				// constructeur par copie
		virtual ~Dog(void);					// destructeur

		Dog				&operator=(Dog const & rhs);	// surcharge d'assignation
		
		void			setIdeas(int i, std::string idea);
		std::string		getIdeas(int i);

		void			makeSound(void) const;
	
	private:
		Brain			*_brain;
};
