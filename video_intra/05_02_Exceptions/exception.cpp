/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:08:27 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/20 13:15:30 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception.hpp"

//-------------- NOMENCLATURE PAR DEFAUT ---------------------//

void	test1()
{
	try
	{
		//Do some stuff here
		if (/* there is an error */)
		{
			throw std::exception();
		}
		else
		{
			//Do some more stuff
		}
	}
	catch (std::exception e)
	{
		//Handle the error here
	}
}

//-------------- CATCH VIA REFERENCE ---------------------//

void	test2()
{
	//Do some stuff here
	if (/* there is an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some more stuff
	}
}

void	test3()
{
	try
	{
		test2();
	}
	catch (std::exception &e)
	{
		//Handle error
	}	
}

//-------------- CATCH VIA THROW SPECIFIER DE CLASSE ---------------------//

void	test4()
{
	class PEBKACException : public std::exception			// herite de std::exception
	{
		public:
			virtual const char	*what() const throw()		// throw specifier ! il lance une exception ou pas
			{
				return ("Problem Exists Between Keyboard and Chair");
			}
	};

	try
	{
		test3();
	}
	catch (PEBKACException &e)								// catch spécifique
	{
		//handle the fact that the user is an idiot
	}
	catch (std::exception &e)								// catch générique
	{
		//handle other exceptions that are like std::exception
	}
}