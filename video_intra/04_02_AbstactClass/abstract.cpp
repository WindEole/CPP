/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:06:46 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/16 13:06:48 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

//---------------------------   CLASSE ABSTRAITE   ---------------------------//

class ACharacter	// On met A devant le nom de la classe pour indiquer qu'elle est abstraite
{
	public:
		virtual void	attack(std::string const &target) = 0;	//	== METHODE PURE : non implementee mais 
		void			sayHello(std::string const &target);		//transmissible aux classes derivees

	private:
		std::string		_name;	//cet attribut ne sera jamais utilise par ACharacter, mais Warrior peut
								//en heriter et l'instancier !
};

class Warrior : public ACharacter
{
	public:
		virtual void	attack(std::string const &target);		//	== METHODE : overridee dans la classe derivee
};

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

//------------------------------   INTERFACE   -------------------------------//

class ICoffeeMaker	// On met I devant le nom de la classe pour indiquer qu'elle n'a que des methodes pures !
{
	public:
		virtual void	fillWaterTank(IWaterSource * src) = 0;
		virtual ICoffee	*makeCoffee(std::string const &type) = 0; 	// On veut recevoir un ptr vers un coffee 
																	// mais on connait pas encore le type donc ICoffee !
	
	// Impossible de mettre des attributs dans l'interface !
};

int	main()
{
	ACharacter	*a = new Warrior();
//	ACharacter	*b = new ACharacter();	//--> 	Impossible car ACharacter est une classe abstraite
												// qui ne peut etre instanciee !

	a->sayHello("students");
	a->attack("roger");
}
