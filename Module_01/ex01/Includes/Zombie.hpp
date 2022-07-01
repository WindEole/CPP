/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:31:15 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 15:31:17 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string		_name;
	
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif