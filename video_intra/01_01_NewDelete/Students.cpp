/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Students.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:38:19 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/03 18:38:25 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student
{
	private:
		std::string	_login;

	public:
		Student() : _login("ldefault") // ici le constructeur ne prend pas de param !
		{
			std::cout << "Constructor / Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Destructor / Student " << this->_login << " died" << std::endl;
		}
};

int	main()
{
	Student		*students; // allocation dynamique donc usage du pointeur + malloc

	students = new Student[42]; // on malloc 42 fois !

	delete [] students; // tous le tableau is destroyed and free
}
