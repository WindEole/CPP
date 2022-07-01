/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:20:44 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 11:20:46 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream	ifs("numbers"); //cree un stream d'input, et ouvre le fichier "numbers"
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2; // sur ce stream, je lis 2 entiers dst et dst2

	std::cout << dst << " " << dst2 << std::endl; // affiche les deux entiers lus
	ifs.close(); // et on ferme le fichier !

	std::ofstream	ofs("test.out");
	ofs << "I like ponies a whole damn lot !" << std::endl;
	ofs.close(); // et on ferme le fichier !
}


/* 
Il existe d'autres manieres d'ouvrir un fichier dans un stream :
	ex : ifs.open("numbers");
*/