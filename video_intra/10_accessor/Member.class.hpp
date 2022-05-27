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

	Member(void);
	~Member(void);

	int		getVar(void) const;	// accesseur en lecture !
	void	setVar(int v);		// accesseur en ecriture !

private:

	int		_var;
};

#endif
