/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastOperator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:58:38 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 10:58:41 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Foo
{
	public:
		Foo(float const v) : _v(v) 	{}

		float	getV(void)			{return this->_v;}

		operator float()			{return this->_v;}
		operator int()				{return static_cast<int>(this->_v);}

	private:
		float	_v;
};

int 	main(void)
{
	Foo 	a(420.042f);
	float	b = a;				// cast implicite de foo vers float. Le compilateur va verifier
								// dans ma classe si j'ai un operateur de cast de Foo vers float
	int 	c = a;				// cast implicite de foo vers int. Le compilateur va verifier
								// dans ma classe si j'ai un operateur de cast de Foo vers int

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return (0);
}
