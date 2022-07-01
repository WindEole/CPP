/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:53:55 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/17 11:53:58 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Brain::Brain(void)						// constructeur par defaut
{
	std::cout << "Brain Default constructor called." << std::endl;
	return;
}

Brain::Brain(Brain const & ref)			// constructeur par copie
{
	std::cout << "Brain Copy constructor called." << std::endl;
	*this = ref;
	return;
}

Brain::~Brain(void)						// destructeur
{
	std::cout << "Brain Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Brain	&Brain::operator=(Brain const &rhs)
{
	int	i = -1;

	if (this == &rhs)
		return (*this);
	while (++i < 100)
		this->ideas[i] = rhs.ideas[i];
//	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

void			Brain::setIdeas(int i, std::string idea)
{
	if (i <= 0 || i > 100)
	{
		std::cout << "Bad ideas" << std::endl;
		return;
	}
	ideas[i + 1] = idea;
	return;
}

std::string		Brain::getIdeas(int i)
{
	if (i <= 0 || i > 100)
		return ("Nothing");
	return (ideas[i + 1]);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

// void	Brain::
// {
	
// 	return;
// }

