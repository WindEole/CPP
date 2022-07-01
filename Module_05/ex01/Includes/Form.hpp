/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:51:56 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 15:56:48 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

# define SIGNED 1
# define UNSIGNED 0

// ATTENTION : utiliser la forme canonique de Coplien !!

class Form									// classe concrete
{
	private:
		std::string const		_name;
		bool					_signed;
		int const				_signGrade;
		int const				_execGrade;

	public:
		Form(void);												// constructeur par defaut
		Form(Form const &copy);									// constructeur par copie
		Form(std::string name, int sign_grade, int exec_grade);	// constructeur by string
		~Form(void);											// destructeur

		Form				&operator=(Form const &rhs);		// surcharge d'assignation

		std::string	const		&getName(void) const;
		bool const				&getSigned(void) const;
		int const				&getSignGrade(void) const;
		int const				&getExecGrade(void) const;

		void					checkGrade(void) const;

		void					beSigned(Bureaucrat const &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade is too high, can't manage form.");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade is too low, can't manage form.");
				}
		};
};

std::ostream 					&operator<<(std::ostream & o, Form const & rhs);
