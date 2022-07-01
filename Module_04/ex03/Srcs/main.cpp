/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:44:52 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:44:54 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

void	CleanFloor(Character *c)
{
	if (c->floor != NULL)
	{
		std::cout << "Cleaning " << c->getName() << " unequiped " << c->floor->getType() << " Materia." << std::endl;
		delete (c->floor);
		c->floor = NULL;
	}
	else
		std::cout << "Nothing to clean !" << std::endl;
}

//----------------------------   MAIN DU SUJET   -----------------------------//

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	std::cout << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << std::endl;

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return (0);
// }

//----------------------------   MAIN EXTENDED   -----------------------------//

int	main()
{
	std::cout << RED << "1) On instancie une MateriaSource, qui peut contenir 4 types de Materia max" << RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	std::cout << RED << "2) On donne a ce tableau de MateriaSource les 2 Materia Ice et Cure (on pourrait rajouter Fire ou Spark)." << RESET << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << RED << "3) On va rajouter 3 Materia Source (pour tester la limite de 4 types)." << RESET << std::endl;	
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	std::cout << YELLOW << "Celle-ci est en trop -> nb de Sources depasse + destruction de la Materia (sinon leaks)." << RESET << std::endl;	
	src->learnMateria(new Ice());
	std::cout << std::endl;

	std::cout << RED << "4) On instancie des Character, chacun a un inventaire vide doté de 4 emplacements." << RESET << std::endl;
	std::cout << YELLOW << "creation sur la stack via New/Delete -> Constructeur by string" << RESET << std::endl;
	ICharacter	*Battlemage = new Character("Elminster");
	std::cout << YELLOW << "creation sur la heap via Default Constructor" << RESET << std::endl;
	Character	Nobody;
	std::cout << YELLOW << "creation sur la heap via String Constructor" << RESET << std::endl;	
	Character	raistlin("Raistlin");
	std::cout << YELLOW << "creation de notre victime : bob ! (via New/Delete)" << RESET << std::endl;
	ICharacter*	bob = new Character("bob");
	std::cout << std::endl;

	std::cout << RED << "5) On cree un pointeur qui pointera vers les differentes MateriaSource (createMateria), puis on les equipe (donc on l'associe a un emplacement de l'inventaire du Perso" << RESET << std::endl;
	AMateria	*tmp;

	// std::cout << YELLOW << "5.a) TEST : pointeur vers NULL -> rien dans l'inventaire !" << RESET << std::endl;
	// tmp = NULL;							// pointe vers rien
	// Battlemage->equip(tmp);				// ne peut rien equiper car il n'y a rien dans l'inventaire!
	// Battlemage->use(0, *bob);
	// Nobody.equip(tmp);
	// Nobody.use(0, *bob);
	// Raistlin.equip(tmp);
	// Raistlin.use(0, *bob);
	// std::cout << std::endl;

	std::cout << YELLOW << "5.a) 1er emplacement d'inventaire : ice" << RESET << std::endl;		
	tmp = src->createMateria("ice");	// on associe le Materia source au 1er emplacement
	Battlemage->equip(tmp);				// on equipe le perso avec son Materia
	Battlemage->use(0, *bob);
	tmp = src->createMateria("ice");
	Nobody.equip(tmp);
	Nobody.use(0, *bob);
	tmp = src->createMateria("ice");
	raistlin.equip(tmp);
	raistlin.use(0, *bob);
	std::cout << std::endl;

	std::cout << YELLOW << "5.b) 2eme emplacement d'inventaire : cure" << RESET << std::endl;
	tmp = src->createMateria("cure");	// on associe le Materia source au 2eme emplacement
	Battlemage->equip(tmp);				// on equipe le perso avec son 2e Materia
	Battlemage->use(1, *bob);
	tmp = src->createMateria("cure");
	Nobody.equip(tmp);
	Nobody.use(1, *bob);
	tmp = src->createMateria("cure");
	raistlin.equip(tmp);
	raistlin.use(1, *bob);
	std::cout << std::endl;

	std::cout << YELLOW << "5.c) 3eme emplacement d'inventaire : cure" << RESET << std::endl;
	tmp = src->createMateria("cure");	
	Battlemage->equip(tmp);
	Battlemage->use(2, *bob);
	tmp = src->createMateria("cure");
	Nobody.equip(tmp);
	Nobody.use(2, *bob);
	tmp = src->createMateria("cure");
	raistlin.equip(tmp);
	raistlin.use(2, *bob);
	std::cout << std::endl;

	std::cout << YELLOW << "5.d) 4eme emplacement d'inventaire : ice" << RESET << std::endl;
	tmp = src->createMateria("ice");
	Battlemage->equip(tmp);
	Battlemage->use(3, *bob);
	tmp = src->createMateria("ice");
	Nobody.equip(tmp);
	Nobody.use(3, *bob);
	tmp = src->createMateria("ice");
	raistlin.equip(tmp);
	raistlin.use(3, *bob);
	std::cout << std::endl;

	std::cout << YELLOW << "5.e) Normalement, il ne peut rien faire : inventaire plein..." << RESET << std::endl;
	tmp = src->createMateria("cure");	
	Battlemage->equip(tmp);
	Battlemage->use(4, *bob);
	Nobody.equip(tmp);
	Nobody.use(4, *bob);
	raistlin.equip(tmp);
	raistlin.use(4, *bob);
	delete tmp;
	std::cout << std::endl;

	std::cout << YELLOW << "creation sur la heap via Copy Constructor" << RESET << std::endl;
	Character	gandalf = raistlin;
	gandalf.use(0, *bob);
	gandalf.use(1, *bob);
	gandalf.use(2, *bob);
	gandalf.use(3, *bob);
	std::cout << std::endl;	

	raistlin.unequip(0);
	CleanFloor(&raistlin);
	std::cout << std::endl;	
	raistlin.unequip(1);
	CleanFloor(&raistlin);
	std::cout << std::endl;	
	raistlin.unequip(2);
	CleanFloor(&raistlin);
	std::cout << std::endl;	
	raistlin.unequip(3);
	CleanFloor(&raistlin);
	std::cout << std::endl;	
	raistlin.unequip(4);
	CleanFloor(&raistlin);
	std::cout << std::endl;	

	Nobody.unequip(3);
	CleanFloor(&Nobody);
	std::cout << std::endl;	

	gandalf.unequip(0);
	CleanFloor(&gandalf);
	std::cout << std::endl;

	Battlemage->unequip(1);
	CleanFloor((Character *)Battlemage);
	std::cout << std::endl;

	delete bob;
	delete Battlemage;
	delete src;

	return (0);
}