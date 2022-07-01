/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:53:56 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 15:53:58 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Point
{
	public:
		Point(void);				// constructeur (Coplien)
		Point(Point const & copy);	// constructeur par copie (Coplien)
		Point(float x, float y);
		~Point(void);				// destructeur (Coplien)

		void	operator=(Point const &rhs);		// surcharge d'assignation (Coplien)
		Fixed	get_x(void);
		Fixed	get_y(void);

	private:
		Fixed	_x;
		Fixed	_y;
};

#endif