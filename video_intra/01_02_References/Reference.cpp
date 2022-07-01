/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reference.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:46:37 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/03 18:46:41 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	int		numberOfBalls = 42; //VARIABLE
	int*	ballsPtr = &numberOfBalls; // PTR : le ptr pointe sur l'adresse (&)
	int&	ballsRef = numberOfBalls; // REF : a la Ref, on affecte directement la var
										// et non son adresse
//	int&	ballsRef2; //FAUX : cette ecriture est impossible car cette Ref ne pointe
						//sur rien !

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
					//VARIABLE				//PTR				//REF
//pour utiliser une ref : ni * ni & car la Ref est deja derefencee !!
	*ballsPtr = 21; // qd on affecte une valeur au ptr dereference (avec *),
					// on change la valeur de la variable vers laquelle il pointe !
	std::cout << numberOfBalls << std::endl;
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	ballsRef = 84; // quand on affecte une valeur a la REF, en realite on change la 
					//valeur de la variable vers laquelle elle pointe !
	std::cout << numberOfBalls << std::endl;
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	return (0);
}
