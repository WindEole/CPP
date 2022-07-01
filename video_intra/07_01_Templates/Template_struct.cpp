/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template_struct.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:01:39 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/24 19:01:42 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template<typename T>					// Definition du Template

class List
{
	public:
		List<T>(T const &content)		// Constructeur par défaut
		{
			// Etc...
		}

		List<T>(List<T> const &list)	// Constructeur par copie
		{
			// Etc...
		}
		~List<T>(void)					// Destructeur
		{
			// Etc...
		}
	private:
		T 			*_content;
		List<T>		*_next;
};

int 	main(void)
{
	List<int>			a(42);		// Notre template de List est instanciee pour des Int
	List<float>			b(3.14f);	// Notre template de List est instanciee pour des float
	List<List<int>>		c(a);		// List en 2 dimensions (List de List...)

	// Etc...

	return (0);
}