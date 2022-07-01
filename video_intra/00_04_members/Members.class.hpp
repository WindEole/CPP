/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   members.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:38:51 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/26 10:38:54 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMBERS_CLASS_H
# define MEMBERS_CLASS_H

class Members
{
//private:
	/* data */
public:

	int	var; //attribut membre

	Members(void);
	~Members(void);

	void	fct(void); //fct membre (remplace le ptr sur fct dans une struct en C)
};

#endif
