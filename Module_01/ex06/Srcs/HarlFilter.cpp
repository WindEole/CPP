/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:20:19 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/07 16:20:34 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

HarlFilter::HarlFilter()
{
	std::cout << "Constructor called" << std::endl;
	return;
}

HarlFilter::~HarlFilter()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	HarlFilter::_debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}

void	HarlFilter::_info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	HarlFilter::_warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	HarlFilter::_error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}


/*    C'est passe avec cette fonction, mais c'est pas la meilleure utilisation de switch...
void	HarlFilter::complain_till_the_end(std::string level)
{
	void			(HarlFilter::*f[])(void) = {&HarlFilter::_debug, &HarlFilter::_info, &HarlFilter::_warning, &HarlFilter::_error};
	std::string		levels[] = {"debug", "info", "warning", "error"};
	int				i = -1;

	while (++i < 4)
	{
		if (levels[i] == level)
		{
			switch (i)
			{
				case 0 : (this->*f[i++])();							//Grumph...
				case 1 : (this->*f[i++])();
				case 2 : (this->*f[i++])();
				case 3 : (this->*f[i++])();
			}
		}
	}
}*/

void	HarlFilter::complain_till_the_end(std::string level)
{
	void			(HarlFilter::*f[])(void) = {&HarlFilter::_debug, &HarlFilter::_info, &HarlFilter::_warning, &HarlFilter::_error};
	std::string		levels[] = {"debug", "info", "warning", "error"};
	int				i = -1;
	int				s;

	while (++i < 4)
		if (levels[i] == level)
			s = i;
	
	switch (s)
	{
		case 0 : (this->*f[0])();
		case 1 : (this->*f[1])();
		case 2 : (this->*f[2])();
		case 3 : (this->*f[3])();
	}
}
