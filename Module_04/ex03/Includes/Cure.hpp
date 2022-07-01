/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:45:50 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:45:52 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Cure : public AMateria				// classe heritiere
{
	public:
		Cure(void);							// constructeur par defaut
		Cure(Cure const & ref);				// constructeur par copie
		Cure(std::string const &type);		// constructeur by string
		~Cure(void);						// destructeur

		Cure			&operator=(Cure const & rhs);	// surcharge d'assignation
		
		AMateria		*clone(void) const;
		void			use(ICharacter &target);
};
