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

	int		publicvar;

	Member();
	~Member(void);

	void	publicfct(void) const;

private:

	int		_privatevar; // ATTENTION syntaxe : c'est la convention la + repandue

	void	_privatefct(void) const;
};

#endif
