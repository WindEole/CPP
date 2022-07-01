/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:43:40 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:43:43 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
public:

 	HumanA(std::string name, Weapon const &weapon);
	~HumanA(void);

	void	attack(void) const;

private:

	std::string const	_name;
	Weapon const 		&_weapon_type;
};

#endif
