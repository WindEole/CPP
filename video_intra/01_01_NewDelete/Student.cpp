/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:16:33 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/03 18:16:49 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student
{
	private:
		std::string	_login;

	public:
		Student(std::string login) : _login(login)
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
	Student		bob = Student("bfubar"); // allocation statique sur la pile
	Student		*jim; // allocation dynamique donc usage du pointeur + malloc

	jim = new Student("jfubar");

	delete jim; // jim is destroyed (il faut free )

	return(0); //bob is destroyed (la pile est nettoyee)
}
