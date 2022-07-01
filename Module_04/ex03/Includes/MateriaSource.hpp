/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:39:03 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/18 10:39:06 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class MateriaSource : public IMateriaSource			// classe derivee de l'interface
{
	public:
		MateriaSource(void);						// constructeur par defaut
		MateriaSource(MateriaSource const &ref);	// constructeur par copie
		~MateriaSource(void);						// destructeur

		MateriaSource		&operator=(MateriaSource const &rhs);	// surcharge d'assignation

		void				learnMateria(AMateria *mat);
		AMateria			*createMateria(std::string const &type);
	
	private:
		AMateria			*_source[4];
		int					_max;
};
