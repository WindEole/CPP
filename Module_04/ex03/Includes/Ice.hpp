/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:45:22 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:45:24 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Ice : public AMateria					// classe heritiere
{
	public:
		Ice(void);							// constructeur par defaut
		Ice(Ice const &ref);				// constructeur par copie
		Ice(std::string const &type);		// constructeur by string
		~Ice(void);							// destructeur

		Ice				&operator=(Ice const & rhs);	// surcharge d'assignation
	
		AMateria		*clone(void) const;
		void			use(ICharacter &target);
};
