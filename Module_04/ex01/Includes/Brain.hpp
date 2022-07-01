/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:43:32 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 11:43:36 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Brain
{
	public:
		Brain(void);							// constructeur par defaut
		Brain(Brain const & ref);				// constructeur par copie
		~Brain(void);							// destructeur

		Brain			&operator=(Brain const & rhs);	// surcharge d'assignation

		void			setIdeas(int i, std::string idea);
		std::string		getIdeas(int i);

	private:
		std::string		_ideas[100];
};