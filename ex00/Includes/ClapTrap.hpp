/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:05:41 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 16:05:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

// ATTENTION : utiliser la forme canonique de Coplien !!

class ClapTrap
{
	public:
		ClapTrap(std::string name);					// constructeur
		ClapTrap(ClapTrap const & ct);	// constructeur par copie
		~ClapTrap(void);				// destructeur

		ClapTrap	&operator=(ClapTrap const & rhs);	// surcharge d'assignation
		ClapTrap	operator+(ClapTrap const &rhs) const;
		ClapTrap	operator-(ClapTrap const &rhs) const;
		ClapTrap	operator--(int);

		void		attack(const std::string & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
};

#endif
