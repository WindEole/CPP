/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:54:56 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/08 10:54:59 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>

class Integer
{
	public:
		Integer(int const n);
		~Integer();

		int		getValue(void) const;

		Integer	&operator=(Integer const &rhs);			//surcharge d'operateur -> assignation (=)
				// RAPPEL : une fct mb envoie tjs la 1ere instance de la classe en premier param
				// donc cette fct a bien 2 parametres ! d'ou possibilite d'assigner !
		Integer	operator+(Integer const &rhs) const;	//surcharge d'operateur -> addition (+)

	private:
		int		_n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);



// rhs pour Right Hand Side (et lhs pour Left Hand Side)

#endif
