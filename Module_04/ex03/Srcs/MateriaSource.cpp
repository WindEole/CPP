/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:39:20 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/18 10:39:22 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

MateriaSource::MateriaSource(void)						// constructeur par defaut
{
	int	i = -1;

	this->_max = 0;
	while (++i < 4)
		this->_source[i] = NULL;
	std::cout << "MateriaSource Default constructor called." << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &ref)	// constructeur par copie
{
	int	i;
	
	this->_max = 0;
	i = -1;
	while (++i < ref._max)
		this->learnMateria(ref._source[i]->clone());
	i = -1;
	while (++i < 4)
		this->_source[i] = NULL;
	std::cout << "MateriaSource Copy constructor called." << std::endl;
	return;
}

MateriaSource::~MateriaSource(void)						// destructeur
{
	int	i = -1;

	while (++i < this->_max)
		delete (this->_source[i]);
	std::cout << "MateriaSource Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int	i;
	
	i = -1;
	while (++i < this->_max)
		delete (this->_source[i]);
	this->_max = 0;
	i = -1;
	while (++i < rhs._max)
		this->learnMateria(rhs._source[i]->clone());
	i = -1;
	while (i < 4)
		this->_source[i] = NULL;
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void			MateriaSource::learnMateria(AMateria *mat)
{
	if (this->_max >= 4 || mat == 0)
	{
		std::cout << "* source of Materia is full *" << std::endl;
		delete mat;
		return;
	}
	else
	{
		this->_source[this->_max] = mat;
		this->_max++;
	}
	return;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int i = -1;

	while (++i < this->_max)
		if (this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	return (NULL);
}