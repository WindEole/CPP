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

	float const	pi;
	int			i1;

	Member(float const f);
	~Member(void);

	void	fct(void) const; // const ici indique au compilateur que cette fct
							// membre ne modifiera jamais l'instance courante !
							// c'est comme un read only de notre instance...
};

#endif
