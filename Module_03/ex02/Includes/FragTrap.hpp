/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:50:25 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/14 10:50:27 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class FragTrap : public ClapTrap		// classe heritiere
{
	public:
		FragTrap(void);					// constructeur par defaut
		FragTrap(std::string name);		// constructeur
		FragTrap(FragTrap const & st);	// constructeur par copie
		~FragTrap(void);				// destructeur

		FragTrap	&operator=(FragTrap const & rhs);	// surcharge d'assignation

		void		highFivesGuys(void);
};
