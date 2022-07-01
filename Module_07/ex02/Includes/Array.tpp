/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:15:36 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 21:15:37 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

// ATTENTION : utiliser la forme canonique de Coplien !!

template< typename T >
class Array												// Template Class !
{
	private :
		T*				_tab;
		unsigned int	_n;
		
	public :
//==========   CONSTRUCTEUR / DESTRUCTEUR   ==========//
		Array<T>(void) : _tab(NULL), _n(0)	//----------// constructeur par défaut
		{
			std::cout << "constructeur par defaut" << std::endl;
		}
		Array<T>(Array const &copy)	//------------------// constructeur par copie
		{
			unsigned int	i = 0;

			this->_n = copy.size();
			this->_tab = new T[this->_n];
			while (i < this->_n)
			{
				this->_tab[i] = copy._tab[i];
				i++;
			}
			std::cout << "constructeur par copie" << std::endl;
		}
		Array<T>(unsigned int n)	//------------------// constructeur by param
		{
			if (static_cast<int>(n) <= 0)
				throw Array<T>::IndexPb();
			else
			{
				this->_n = n;
				this->_tab = new T[_n];
			}
			std::cout << "constructeur par parametre" << std::endl;	
			// unsigned int	i = 0;
			
			// while (i < this->_n)
			// 	this->_tab[i++] = 0;
		}
		~Array<T>(void)	//------------------------------// destructeur
		{
			std::cout << "Destructor" << std::endl;
			delete [] this->_tab;
		}
//==========   SURCHARGE D'OPERATEUR   ==========//
		Array<T>	&operator=(Array<T> const &rhs)	//--// surcharge opé d'assignation
		{
			if (this != &rhs)
			{
				if (_n)
					delete [] _tab;
				this->_n = rhs.size();
				this->_tab = new T[this->_n];

				unsigned int	i = 0;
				while (i < this->_n)
				{
					this->_tab[i] = (rhs.getTab())[i];
					i++;
				}				
			}
			return (*this);
		}
		T			&operator[](unsigned int index)	//----------// surcharge opé d'indice
		{
			if (index >= this->size() || index < 0)
				throw Array<T>::IndexPb();
			else
				return (this->_tab[index]);
		}
		T const		&operator[](unsigned int index) const	//------// surcharge opé d'indice const !
		{
			if (index >= this->size() || index < 0)
				throw Array<T>::IndexPb();
			else
				return (this->_tab[index]);
		}
//==========   NESTED CLASS   ==========//
		class IndexPb : public std::exception	//------// Nested Class for exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Array index out of bound, exiting");
				}
		};
//==========   FONCTION MEMBRE   ==========//	
		unsigned int	size(void) const	//----------// getter !
		{
			return (this->_n);
		}
		T* 		getTab(void) const
		{
			return (this->_tab);
		}
};

template< typename T >
std::ostream		&operator<<(std::ostream &out, Array<T> const &rhs)
{
	unsigned int	i = 0;

	out << "[ ";
	while (i < rhs.size())
	{
		out << rhs[i];
		if (i != rhs.size() - 1)
			out << ", ";
		i++;
	}
	out << " ]";
	return (out);
}
