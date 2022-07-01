/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:35:55 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/08 16:35:59 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Fixed
{
	public:
		Fixed(void);				// constructeur
		Fixed(Fixed const & fixed);	// constructeur par copie
		~Fixed(void);				// destructeur

		Fixed	&operator=(Fixed const &rhs); // surcharge d'assignation
	
		int		getRawBits(void) const;		// retourne la val du nb sans conversion
		void	setRawBits(int const raw);	// initialise la valeur du nb (param)

	private:
		int					_nb;	// stocke la valeur en virgule fixe
		static const int	_fb = 8;	// stocke 8 bits de la partie fractionnaire
};

#endif
