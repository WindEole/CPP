/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:53:34 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/28 09:53:46 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T>									// classe heritiere
{
	public :
		MutantStack(void) {}												// constructeur par défaut
		MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}		// constructeur par copie
		virtual ~MutantStack(void) {}										// destructeur

		MutantStack &operator=(MutantStack const &) { return *this; }		// surcharge d'assignation

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }
};
