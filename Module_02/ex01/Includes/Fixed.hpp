/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:45:46 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 12:45:48 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Fixed
{
	public:
		Fixed(void);				// constructeur
		Fixed(Fixed const & fixed);	// constructeur par copie
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);				// destructeur

		Fixed	&operator=(Fixed const &rhs); // surcharge d'assignation
	
		int		getRawBits(void) const;		// retourne la val du nb sans conversion
		void	setRawBits(int const raw);	// initialise la valeur du nb (param)
		float	toFloat(void) const;		// convertit la valeur (virgule fixe) en nb a virgule flottante
		int		toInt(void) const;			// convertit la valeur (virgule fixe) en nb entier

	private:
		int					_nb;	// stocke la valeur en virgule fixe
		static const int	_fb = 8;	// stocke 8 bits de la partie fractionnaire
};

std::ostream	&operator<<(std::ostream & o, Fixed const &rhs);

#endif
