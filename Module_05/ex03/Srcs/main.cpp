/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:11:49 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/20 16:11:51 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

int main()
{
/*
	std::cout << GREEN << "//----------   TEST DES BUREAUCRATES DE L'EX00   ----------//" << RESET << std::endl;

	{
		std::cout << RED << "Test des constructeurs (default, copy, string)" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "creation sur la heap via Default Constructor (Default, 150)" << RESET << std::endl;
			Bureaucrat 		bureaucrat;
			std::cout << bureaucrat << std::endl;

			std::cout << YELLOW << "creation sur la heap via String Constructor (Assistant, 25)" << RESET << std::endl;
			Bureaucrat		assistant("Assistant", 25);
			std::cout << assistant << std::endl;

			std::cout << YELLOW << "creation sur la heap via Copy Constructor (-> Assistant_copy, 25" << RESET << std::endl;
			Bureaucrat 		secretary = assistant;
			std::cout << secretary << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test de la limite haute lors de la construction" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "String Constructor (Bureaucrat, -42)" << RESET << std::endl;
			Bureaucrat 		bureaucrat("Bureaucrat", -42);
			std::cout << bureaucrat << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test de la limite basse lors de la construction" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "String Constructor (Bureaucrat, 169)" << RESET << std::endl;
			Bureaucrat 		bureaucrat("Bureaucrat", 169);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test des incrementations et decrementations de grade" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "String Constructor (Bureaucrat, 25)" << RESET << std::endl;
			Bureaucrat 		bureaucrat1("Promotion", 25);
			bureaucrat1.upGrade();
			std::cout << bureaucrat1 << std::endl;

			std::cout << YELLOW << "String Constructor (Bureaucrat, 70)" << RESET << std::endl;
			Bureaucrat 		bureaucrat2("Placard", 70);
			bureaucrat2.downGrade();
			std::cout << bureaucrat2 << std::endl;

			std::cout << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test d'incrementation en limite haute" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "String Constructor (Bureaucrat, 1)" << RESET << std::endl;
			Bureaucrat 		bureaucrat1("TheBestoftheYear", 1);
			bureaucrat1.upGrade();
			std::cout << bureaucrat1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test de decrementations en limite basse" << RESET << std::endl;	
		try
		{
			std::cout << YELLOW << "String Constructor (Bureaucrat, 150)" << RESET << std::endl;
			Bureaucrat 		bureaucrat1("WorthyofFiring", 150);
			bureaucrat1.downGrade();
			std::cout << bureaucrat1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << GREEN << "//----------   TEST DES FORMS + BUREAUCRATES   ----------//" << RESET << std::endl;

	{
		std::cout << std::endl;
		std::cout << RED << "Test Form sign grade 150, exec grade 1 (normal form)" << RESET << std::endl;
		try
		{
			AForm a("Siret", 150, 1);
			std::cout << a << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test Form sign grade 150, exec grade 0 (limite haute exec grade) " << RESET << std::endl;
		try
		{
			AForm a("kbis", 150, 0);
			std::cout << a << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test Form sign grade 151, exec grade 1 (limite basse sign grade)" << RESET << std::endl;
		try
		{
			AForm a("2032", 151, 1);
			std::cout << a << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test Form sign grade 150, exec grade 1, and bureaucrat 150 signs it " << RESET << std::endl;
		try
		{
			AForm a("LMNP", 150, 1);
			std::cout << CYAN << a << RESET << std::endl;
			Bureaucrat b("Expert Comptable", 150);
			std::cout << BLUE << b << RESET << std::endl;
			b.signForm(a);
			a.beSigned(b);
			std::cout << CYAN << a << RESET << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << RED << "Test Form sign grade 149, exec grade 1, and bureaucrat 150 signs it " << RESET << std::endl;
		try
		{
			AForm a("TaxeFonciere", 149, 1);
			std::cout << CYAN << a << RESET << std::endl;
			Bureaucrat b("Controleur des Impots", 150);
			std::cout << BLUE << b << RESET << std::endl;
			b.signForm(a);
			a.beSigned(b);
			std::cout << CYAN << a << RESET << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}*/

	// std::cout << GREEN << "//----------   TEST DES SPECIAL FORMS   ----------//" << RESET << std::endl;

	// std::cout << RED << "Test ShrubberyCreationForm (sign 145 / exec 137)" << RESET << std::endl;

	// {
	// 	std::cout << std::endl << YELLOW << "lvl 146 tries to sign and exe :" << RESET << std::endl;
	// 	AForm* shrub = new ShrubberyCreationForm("jardin");
	// 	Bureaucrat executor("Gardenscaper", 146);

	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		shrub->beSigned(executor);
	// 		shrub->execute(executor);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete shrub;
	// }
	// {
	// 	std::cout << std::endl << YELLOW << "lvl 146 upgrades and then tries to sign and exe :" << RESET << std::endl;
	// 	AForm* shrub = new ShrubberyCreationForm("jardin");
	// 	Bureaucrat executor("Gardenscaper", 146);

	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		executor.upGrade();
	// 		shrub->beSigned(executor);
	// 		shrub->execute(executor);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete shrub;
	// }
	// {
	// 	std::cout << std::endl << YELLOW << "lvl 137 tries to exe, then lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << RESET << std::endl;
	// 	AForm* shrub = new ShrubberyCreationForm("jardin");
	// 	Bureaucrat executor("Responsable Eaux et Forets", 145);
	// 	Bureaucrat executor2("Gardenscaper", 137);
		
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		shrub->execute(executor2);
	// 		shrub->beSigned(executor);
	// 		shrub->execute(executor);	
	// 		shrub->execute(executor2);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete shrub;
	// }
	// {
	// 	std::cout << std::endl << YELLOW << "lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << RESET << std::endl;
	// 	AForm* shrub = new ShrubberyCreationForm("jardin");
	// 	Bureaucrat executor("Responsable Eaux et Forets", 145);
	// 	Bureaucrat executor2("Gardenscaper", 137);
		
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		shrub->beSigned(executor);
	// 		shrub->execute(executor);	
	// 		shrub->execute(executor2);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete shrub;
	// }
	// {
	// 	std::cout << std::endl << YELLOW << "lvl 145 tries to sign, then lvl 137 tries to exe :" << RESET << std::endl;
	// 	AForm* shrub = new ShrubberyCreationForm("jardin");
	// 	Bureaucrat executor("Responsable Eaux et Forets", 145);
	// 	Bureaucrat executor2("Gardenscaper", 137);
		
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		shrub->beSigned(executor);
	// 		shrub->execute(executor2);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;
	// 	}

	// 	executor2.executeForm(*shrub);
	// 	std::cout << CYAN << "Schrubbery recorded." << RESET << std::endl;
	// 	std::cout << std::endl;
	// 	delete shrub;
	// }

	// std::cout << std::endl << RED << "Test RobotomyRequestForm (sign 72 / exec 45)" << RESET << std::endl;

	// {
	// 	std::cout << std::endl << YELLOW << "lvl 2 tries to sign and exe :" << RESET << std::endl;
	// 	AForm* roboK = new RobotomyRequestForm("Agent K");
	// 	AForm* roboH = new RobotomyRequestForm("Agent H");
	// 	Bureaucrat executor("Agent 2", 2);

	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		roboK->beSigned(executor);
	// 		roboK->execute(executor);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << roboK->getName() << std::endl;
	// 	}

	// 	try
	// 	{
	// 		roboH->beSigned(executor);
	// 		roboH->execute(executor);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << roboH->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete roboK;
	// 	delete roboH;
	// }

	// std::cout << std::endl << RED << "Test PresidentialPardonForm (sign 25 / exec 5)" << RESET << std::endl;

	// {
	// 	std::cout << std::endl << YELLOW << "lvl 2 tries to sign and exe :" << RESET << std::endl;
	// 	AForm* pardon = new PresidentialPardonForm("Eric Dupont-Moretti");
	// 	Bureaucrat executor("Jean Castex", 2);

	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		pardon->beSigned(executor);
	// 		pardon->execute(executor);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << executor.getName() << " : " << e.what() << pardon->getName() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	delete pardon;
	// }

	std::cout << std::endl << GREEN << "//----------   TEST DES STAGIAIRES (INTERNS)   ----------//" << RESET << std::endl;

	std::cout << std::endl << RED << "intern creates form and lvl 1 signs and execute" << RESET << std::endl;
	std::cout << std::endl << YELLOW << "test Presidential pardon" << RESET << std::endl;
	{
		Intern	randomIntern;
		AForm	*form;

		form = NULL;
		std::cout << std::endl;
		try
		{
			form = randomIntern.makeForm("presidential pardon", "Bender");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		if (form != NULL)
		{
			Bureaucrat executor("Minister of Magic", 1);
			std::cout << std::endl;
			try
			{
				form->beSigned(executor);
				form->execute(executor);
			}
			catch (std::exception &e)
			{
				std::cout << executor.getName() << " : " << e.what() << form->getName() << std::endl;
			}
			std::cout << std::endl;
			delete form;
		}
	}
	std::cout << std::endl << YELLOW << "test Robotomy Request" << RESET << std::endl;
	{
		Intern	randomIntern;
		AForm	*form;

		form = NULL;
		std::cout << std::endl;
		try
		{
			form = randomIntern.makeForm("robotomy request", "C3P0");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		if (form != NULL)
		{
			Bureaucrat executor("Jabba the Hutt", 1);
			std::cout << std::endl;
			try
			{
				form->beSigned(executor);
				form->execute(executor);
			}
			catch (std::exception &e)
			{
				std::cout << executor.getName() << " : " << e.what() << form->getName() << std::endl;
			}
			std::cout << std::endl;
			delete form;
		}
	}
	std::cout << std::endl << YELLOW << "test Shrubbery Creation" << RESET << std::endl;
	{
		Intern	randomIntern;
		AForm	*form;

		form = NULL;
		std::cout << std::endl;
		try
		{
			form = randomIntern.makeForm("shrubbery creation", "Parc_Municipal");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		if (form != NULL)
		{
			Bureaucrat executor("Ministre de l'agriculture", 1);
			std::cout << std::endl;
			try
			{
				form->beSigned(executor);
				form->execute(executor);
			}
			catch (std::exception &e)
			{
				std::cout << executor.getName() << " : " << e.what() << form->getName() << std::endl;
			}
			std::cout << CYAN << "file created !" << RESET << std::endl << std::endl;
			delete form;
		}
	}
	std::cout << std::endl << YELLOW << "test error" << RESET << std::endl;
	{
		Intern	randomIntern;
		AForm	*form;

		form = NULL;
		std::cout << std::endl;
		try
		{
			form = randomIntern.makeForm("shdgshgoshg", "Bender");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		if (form != NULL)
		{
			Bureaucrat executor("Minister of Magic", 1);
			std::cout << std::endl;
			try
			{
				form->beSigned(executor);
				form->execute(executor);
			}
			catch (std::exception &e)
			{
				std::cout << executor.getName() << " : " << e.what() << form->getName() << std::endl;
			}
			std::cout << std::endl;
			delete form;
		}
	}
	return (0);
}
