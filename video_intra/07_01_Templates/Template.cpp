/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:04:42 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/24 18:04:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

//----------   LANGAGE C   ----------//

// int 	max(int x, int y)
// {
// 	return (x >= y ? x : y);	// Cette ligne se lit : est-ce que x est superieur
// 								// ou égal à y ? si oui : return x, si non : return y
// }

//----------   LANGAGE C++   ----------//

template<typename T>	// Template definition						
T const 	&max(T const &x, T const &y)	// & parce que x et y pourraient etre des instances de grosse classes, const, parce que notre fct ne modifie pas les valeurs
{
	return (x >= y ? x : y);
}

int 	(foo(int x))
{
	std::cout << "Long computing time" << std::endl;
	return (x);
}

int 	main(void)
{
	int 	a = 21;
	int 	b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;				// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;					// Implicit instanciation (à éviter)

	float 	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl;				// Explicit instanciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;					// Implicit instanciation (à éviter)

	char 	e = 'a';
	char 	f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl;				// Explicit instanciation
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;					// Implicit instanciation (à éviter)

	int 	ret = max<int>(foo(a), foo(b)); 				// Explicit instanciation; foo est appelée une
															// seule fois par parametre ! (contrairement au C)
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	return (0);
}
