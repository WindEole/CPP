/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Member.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:38:51 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:38:54 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMBER_CLASS_H
# define MEMBER_CLASS_H

class Member
{
public:

	Member(void);								// Constructeur
	~Member(void);								// Destructeur

	static int	getNbInst(void);				// Accesseur getter ds fct non mb
// fct qui sert a compter le nb d'instances crees dans cette classe...
private:

	static int	_nbInst;						// declaration de l'Attribut non membre
};

#endif
