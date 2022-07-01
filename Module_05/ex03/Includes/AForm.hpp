/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:54:22 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 15:54:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

# define SIGNED 1
# define UNSIGNED 0

// ATTENTION : utiliser la forme canonique de Coplien !!

class AForm															// classe abstraite
{
	protected:
		std::string const		_name;
		bool					_signed;
		int const				_signGrade;
		int const				_execGrade;

	public:
		AForm(void);												// constructeur par defaut
		AForm(AForm const &copy);									// constructeur par copie
		AForm(std::string name, int sign_grade, int exec_grade);	// constructeur by string
		virtual ~AForm(void);												// destructeur

		AForm					&operator=(AForm const &rhs);		// surcharge d'assignation

		std::string	const		&getName(void) const;
		bool const				&getSigned(void) const;
		int const				&getSignGrade(void) const;
		int const				&getExecGrade(void) const;

		void					checkGrade(void) const;

		virtual void			beSigned(Bureaucrat const &bureaucrat);
		virtual void			execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade is too high, can't manage form ");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade is too low, can't manage form ");
				}
		};
};

std::ostream 					&operator<<(std::ostream & o, AForm const & rhs);
