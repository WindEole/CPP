/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:49:16 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 10:49:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class ScavTrap : public ClapTrap		// classe heritiere
{
	public:
		ScavTrap(void);					// constructeur par defaut
		ScavTrap(std::string name);		// constructeur
		ScavTrap(ScavTrap const & st);	// constructeur par copie
		~ScavTrap(void);				// destructeur

		ScavTrap	&operator=(ScavTrap const & rhs);	// surcharge d'assignation

		void	attack(const std::string & target);
		void	guardGate(void) const;
};
