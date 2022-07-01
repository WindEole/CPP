/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:11:00 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 18:11:42 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

// ATTENTION : utiliser la forme canonique de Coplien !!

class Character : public ICharacter			// classe derivee de l'interface
{
	public:
		Character(void);					// constructeur par defaut
		Character(Character const &copy);	// constructeur par copie
		Character(std::string name);		// constructeur by string
		virtual ~Character(void);			// destructeur

		Character		&operator=(Character const &rhs);	// surcharge d'assignation

		virtual std::string const	&getName() const;

		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

		AMateria					*floor;
	
	private:
		std::string					_name;
		AMateria					*_inventory[4];
		int							_nbMateria;
	
};
