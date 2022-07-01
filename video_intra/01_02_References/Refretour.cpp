/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Refretour.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:27:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 10:27:10 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string const &login) : _login(login)
		{
		}
		
		std::string	&getLoginRef()
		{
			return this->_login;
		}

		std::string const	&getLoginRefConst() const
		{
			return this->_login;
		}

		std::string	*getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const	*getLoginPtrConst() const
		{
			return &(this->_login);
		}
};

int	main()
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar"; // on ne peut pas modifier jim car il est const !
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

}
