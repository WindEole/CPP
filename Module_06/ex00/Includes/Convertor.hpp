/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:21:06 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 14:21:09 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstring>
# include <limits>
# include <cmath>

# define typeChar 0
# define typeFloat 1
# define typeDouble 2
# define typeInt 3

// ATTENTION : utiliser la forme canonique de Coplien !!

class Convertor											// classe concrete
{
	private :
		int		_type;
		
	public :
		Convertor(void);								// constructeur par défaut
		Convertor(Convertor const &copy);				// constructeur par copie
		~Convertor(void);								// destructeur

		Convertor &operator=(Convertor const &rhs);		// surcharge d'assignation

		void	analyseType(const char *input);
		void	print(const char *input);

	 	class NotConvertible : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Data can't be converted.");
				}
		};
};
