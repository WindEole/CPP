/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassTest.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:49:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 17:49:06 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Classtest											// classe concrete
{
	private :
		int			_n;
		
	public :
		Classtest(void);								// constructeur par défaut
		Classtest(Classtest const &copy);				// constructeur par copie
		Classtest(int n);								// constructeur by param
		~Classtest(void);								// destructeur

		Classtest	&operator=(Classtest const &rhs);	// surcharge d'assignation

		bool 		operator<(Classtest const &rhs) const;
		bool 		operator>(Classtest const &rhs) const;

		int			getN(void) const;
		void 		setN(int n);
};

std::ostream		&operator<<(std::ostream &out, Classtest const &rhs);
