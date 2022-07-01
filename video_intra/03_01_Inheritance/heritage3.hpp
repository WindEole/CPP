/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:47:09 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/10 15:47:11 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadrupede
{
	private:
		std::string		_name;		// Only accessible from a Quadrupede object
	
	protected:
		Leg				legs[4];	// Accessible from a Quadrupede object or derived object
	
	public:
		void			run();		// Accessible from wherever
};

class Dog : public Quadrupede		// Can access run() and legs
{

};

int	main()							// Can only access run()
{

}
