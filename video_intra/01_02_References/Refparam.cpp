/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Refparam.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:16:33 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/04 10:16:36 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

void	byPtr(std::string *str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and daisies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int		main()
{
	std::string	str;
	
	str = "I like butterflies";
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}