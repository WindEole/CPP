/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:11:33 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/20 16:11:35 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"

class AForm;

// ATTENTION : utiliser la forme canonique de Coplien !!

class Bureaucrat									// classe concrete
{
	private:
		std::string const		_name;
		int						_grade;

	public:
		Bureaucrat(void);							// constructeur par defaut
		Bureaucrat(Bureaucrat const &copy);			// constructeur par copie
		Bureaucrat(std::string name, int grade);	// constructeur by string
		~Bureaucrat(void);							// destructeur

		Bureaucrat				&operator=(Bureaucrat const &rhs);	// surcharge d'assignation

		std::string	const		&getName(void) const;
		int const				&getGrade(void) const;

		void 					upGrade(void);
		void					downGrade(void);

		void					checkGrade(void);
		void					signForm(AForm &form);
		void					executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Bureaucrat's grade is too high...");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Bureaucrat's grade is too low...");
				}
		};
};

std::ostream 					&operator<<(std::ostream & o, Bureaucrat const & rhs);
