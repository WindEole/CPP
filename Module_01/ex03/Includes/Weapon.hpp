/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:44:05 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 14:44:08 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:

		Weapon(std::string type);
		~Weapon(void);
		
		std::string const	&getType(void) const;
		void				setType(std::string type);
	
	private:

		std::string	_type;
};

#endif
