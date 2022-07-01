/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:43:22 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:43:25 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:

 	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon( Weapon &weapon);
	void	attack(void) const;

private:

	std::string const	_name;
	Weapon				*_weapon_type;
};

#endif
