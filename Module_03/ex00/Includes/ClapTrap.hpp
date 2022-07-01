/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:05:41 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/13 16:43:51 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class ClapTrap
{
	public:
		ClapTrap(void);					// constructeur par defaut
		ClapTrap(std::string name);		// constructeur
		ClapTrap(ClapTrap const & ct);	// constructeur par copie
		~ClapTrap(void);				// destructeur

		ClapTrap	&operator=(ClapTrap const & rhs);	// surcharge d'assignation
	
		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool			check(void) const;

		std::string		getName(void) const;
		int				getHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getAttackDamage(void) const;

	private:
		std::string		_name;
		int				_HitPoints;
		int				_EnergyPoints;
		int				_AttackDamage;
		int				_initialHP;
		int				_initialEP;
};
