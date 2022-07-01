/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:51:43 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 11:51:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class DiamondTrap : public FragTrap, public ScavTrap	// classe heritiere
{
	public:
		DiamondTrap(void);								// constructeur par defaut
		DiamondTrap(std::string name);					// constructeur
		DiamondTrap(DiamondTrap const & st);			// constructeur par copie
		virtual ~DiamondTrap(void);						// destructeur

		DiamondTrap		&operator=(DiamondTrap const & rhs);	// surcharge d'assignation

		void			attack(std::string const & target);
		void			whoAmI(void);
	
	private:
		std::string		_name;
};
