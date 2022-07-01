/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:56:40 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/27 18:56:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Span::Span(void)								// constructeur par défaut
{
	std::cout << "Span Default constructor called." << std::endl;
	this->_N = 0;
	return;
}

Span::Span(Span const &copy)					// constructeur par copie
{
	std::cout << "Span Copy constructor called." << std::endl;
	*this = copy;
	return;
}

Span::Span(unsigned int N)						// constructeur par parametre
{
	std::cout << "Span Param constructor called." << std::endl;
	this->_N = N;
	return;
}

Span::~Span(void)								// destructeur
{
	std::cout << "Span Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Span		&Span::operator=(Span const &rhs)
{
	std::cout << "Span Assignment operator called." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_N = rhs._N;
	this->_vec = rhs._vec;
	return (*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Span::addNumber(int i)
{
	if (this->_vec.size() < this->_N)
		_vec.push_back(i);
	else
		throw Span::ReachMaxSize();
}

int		Span::shortestSpan(void)
{
	if (this->_vec.size() < 2)
		throw Span::Impossible();

	std::vector<int>			tmp = this->_vec;
	std::vector<int>::iterator	it;
	int							shortest;

	sort(tmp.begin(), tmp.end());
	shortest = *(tmp.begin() + 1) - *tmp.begin();
	it = tmp.begin();
	while (it != (tmp.end() - 1))
	{
		if (shortest > (*(it + 1) - *it))
			shortest = *(it + 1) - *it;
		it++;
	}
	return (shortest);
}

int		Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
		throw Span::Impossible();
	
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	min = min_element(this->_vec.begin(), this->_vec.end());
//	std::cout << *min << std::endl;
	max = max_element(this->_vec.begin(), this->_vec.end());
//	std::cout << *max << std::endl;
	return (*max - *min);
}

void	Span::fillRandom(void)
{
	srand(time(NULL));
	while (this->_vec.size() < this->_N)
		this->_vec.push_back(rand());
}

void	Span::rangeIter(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (this->_vec.size() >= this->_N)
			throw Span::ReachMaxSize();
		this->_vec.push_back(*begin);
		begin++;
	}
}

//------------------------   NESTED EXCEPTION CLASS   ------------------------//

const char	*Span::ReachMaxSize::what(void) const throw()
{
	return ("Container has reached maximum size, can't add element.");
}

const char	*Span::Impossible::what(void) const throw()
{
	return ("Impossible to execute function. Please check the number of elements.");
}
