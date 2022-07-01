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
		Fixed(const int n);			// constructeur int
		Fixed(const float n);		// constructeur float
		~Fixed(void);				// destructeur

		Fixed	&operator=(Fixed const &rhs);		// surcharge d'assignation

		Fixed	operator+(Fixed const &rhs) const;	// surcharge d'operateurs arithmetiques
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		bool	operator>(Fixed const &rhs) const;	// surcharge d'operateurs de comparaison
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed	&operator++();		// pre incr		// surcharges d'operateurs in/de/crementation
		Fixed	&operator--();		// pre decr
		Fixed	operator++(int);	// post incr
		Fixed	operator--(int);	// post decr

		int		getRawBits(void) const;		// retourne la val du nb sans conversion
		void	setRawBits(int const raw);	// initialise la valeur du nb (param)
		float	toFloat(void) const;		// convertit la valeur (virgule fixe) en nb a virgule flottante
		int		toInt(void) const;			// convertit la valeur (virgule fixe) en nb entier

		static Fixed	&min(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(Fixed const &lhs, Fixed const &rhs);
		static Fixed	&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&max(Fixed const &lhs, Fixed const &rhs);

	private:
		int					_nb;	// stocke la valeur en virgule fixe
		static const int	_fb = 8;	// stocke 8 bits de la partie fractionnaire
};

std::ostream	&operator<<(std::ostream & o, Fixed const &rhs);

#endif
