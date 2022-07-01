/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:42:18 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/06 12:42:37 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "let's see :" << std::endl;

	std::cout << "                     |====================|====================|" << std::endl;
	std::cout << "                     |   memory adress    |       value        |" << std::endl;
	std::cout << "|====================|====================|====================|" << std::endl;
	std::cout << "|string              :" << std::setw(20) << &string << "|" << std::setw(20) << string << "|" << std:: endl;
	std::cout << "|stringPTR           :" << std::setw(20) << stringPTR << "|" << std::setw(20) << *stringPTR << "|" << std:: endl;
	std::cout << "|stringREF           :" << std::setw(20) << &stringREF << "|" << std::setw(20) << stringREF << "|" << std:: endl;
	std::cout << "|====================|====================|====================|" << std::endl;
}
