/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpretCast.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:31:54 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 10:31:57 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	float 	a = 420.042f;						// Reference value

	void 	*b = &a;							// Implicit promotion -> OK
	int 	*c = reinterpret_cast<int *>(b);	// Explicit demotion -> OK
	int 	&d = reinterpret_cast<int &>(b);	// Explicit demotion -> OK

	return (0);s
}
