/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:00:41 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/21 16:00:43 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
	AForm("ShrubberyCreationForm", 145, 137), \
	_target("Default")									// constructeur par défaut
{
	std::cout << "ShrubberyCreationForm Default constructor called." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :
	AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), \
	_target(copy._target)								// constructeur par copie
{
	this->_signed = copy.getSigned();
	*this = copy;
	std::cout << "ShrubberyCreationForm Copy constructor called." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	AForm("ShrubberyCreationForm", 145, 137), \
	_target(target)										// constructeur by string
{
	std::cout << "ShrubberyCreationForm String constructor called." << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)		// destructeur
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm Assignment operator called." << std::endl;
	this->_signed = rhs._signed;
	return(*this);
}

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&ShrubberyCreationForm::getName(void) const
{
	return(this->_name);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 137)
		throw (AForm::GradeTooLowException());
	else if (!this->_signed)
	{
		std::cout << "This " << this->_name << " form is not signed, therefore it can't be executed." << std::endl;
		return;
	}
	else
	{
		std::ofstream	fd_out;
		std::string		fileName = this->_target;
		fileName += "_shrubbery";
		fd_out.open(fileName.c_str());
		fd_out << "                      ___ " << std::endl;
		fd_out << "                _,-'''   ''''`--. " << std::endl;
		fd_out << "             ,-'          __,,-- \\ " << std::endl;
		fd_out << "           ,'    __,--""""dF      ) " << std::endl;
		fd_out << "          /   .-'Hb_,--""dF      / " << std::endl;
		fd_out << "        ,'       _Hb ___dF'-._,-' " << std::endl;
		fd_out << "      ,'      _,-"""   """--..__ " << std::endl;
		fd_out << "     (     ,-'                  `. " << std::endl;
		fd_out << "      `._,'     _   _             ; " << std::endl;
		fd_out << "       ,'     ,' `-'Hb-.___..._,-' " << std::endl;
		fd_out << "       \\    ,''Hb.-'HH`-.dHF'' " << std::endl;
		fd_out << "        `--'   \"Hb  HH  dF\" " << std::endl;
		fd_out << "                \"Hb HH dF \"" << std::endl;
		fd_out << "                 \"HbHHdF \"" << std::endl;
		fd_out << "                  |HHHF " << std::endl;
		fd_out << "                  |HHH| " << std::endl;
		fd_out << "                  |HHH| " << std::endl;
		fd_out << "                  |HHH| " << std::endl;
		fd_out << "                  |HHH| " << std::endl;
		fd_out << "                  dHHHb " << std::endl;
		fd_out << "                .dFd|bHb.              o " << std::endl;
		fd_out << "      o       .dHFdH|HbTHb.         o / " << std::endl;
		fd_out << "  Y  |  __,dHHFdHH|HHhoHHb.__  | __  Y " << std::endl;
		fd_out.close();
	}
}
