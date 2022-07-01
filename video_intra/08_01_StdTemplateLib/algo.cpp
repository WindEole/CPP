/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:54:12 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/27 13:54:15 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

//------ algorithme d'affichage ------//

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int		main()
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);

	for_each(lst.begin(), lst.end(), displayInt);	// du debut de la liste(begin), a sa fin(end)
													// on applique la fct displayInt
	return (0);
}

//------ iterator equivalent ------//

int		main()
{
	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(17);
	lst.push_back(42);

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst.end();

	for(it = lst.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}

	//--- test boucle while ---//

	std::cout << std::endl;
	it = lst.begin();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;	
	}


// 	return (0);
// }