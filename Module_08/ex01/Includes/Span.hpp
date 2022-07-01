/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:45:20 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/27 18:45:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;

	public:
		Span(void);				// constructeur par défaut
		Span(Span const &copy); // constructeur par copie
		Span(unsigned int N);	// constructeur par paramètre
		~Span(void);				// destructeur

		Span	&operator=(Span const &rhs);

		void	addNumber(int i);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	fillRandom(void);
		void	rangeIter(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class ReachMaxSize : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class Impossible : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};