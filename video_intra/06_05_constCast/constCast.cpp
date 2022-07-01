/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:48:08 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 10:48:11 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	float 		a = 42;							// Reference value

	int const 	*b = &a;						// Implicit promotion -> OK (var vers const)
	int 		*c = b;							// Implicit demotion -> NO (const vers var) Ne compile pas !
	int 		*d = const_cast<int *>(b);		// Explicit demotion -> OK (const vers var)

	return (0);
}
