/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:32:30 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/22 18:32:32 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	int 		a = 42;						// Reference value

	double 		b = a;						// Implicit promotion	-> OK
	int 		c = b;						// Implicit demotion	-> NO
	int 		d = static_cast<int>(b);	// Explicit demotion	-> OUI bonne pratique !
				//		|-> correspond a (int)b en langage c

	return (0);
}
