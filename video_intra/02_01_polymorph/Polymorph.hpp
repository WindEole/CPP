/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:38:50 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 18:39:30 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

class Polymorph
{
	public:
		Polymorph(/* args */);
		~Polymorph();
	
	void	fctPoly(char const c) const;
	void	fctPoly(int const n) const;
	void	fctPoly(float const z) const;
	void	fctPoly(Polymorph const & t) const;
};

#endif
