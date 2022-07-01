/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:42:49 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 17:42:52 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

// ATTENTION : utiliser la forme canonique de Coplien !!

class AMateria								// classe mere abstraite
{
	public:
		AMateria(void);						// constructeur par defaut
		AMateria(AMateria const &ref);		// constructeur par copie
		AMateria(std::string const &type);	// constructeur by string
		virtual ~AMateria(void);			// destructeur

		AMateria			&operator=(AMateria const & rhs);	// surcharge d'assignation
		
		std::string const	&getType(void) const;	// returns the materia type (getter)

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string			_type;
};
