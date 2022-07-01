/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:04:24 by iderighe          #+#    #+#             */
/*   Updated: 2022/05/25 13:14:04 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//**********   declaration des variables   **********//

int	gl_var = 1;
int	f(void){return 2;}

//**********   definition des namespace   **********//

namespace	var1
{
	int	gl_var = 3;
	int	f(void){return 4;}
}

namespace	var2
{
	int	gl_var = 5;
	int	f(void){return 6;}
}

namespace	var3
{
	int	gl_var = 7;
	int	f(void){return 8;}
}

//**********   Aliasing de namespace   **********//

namespace	var4=var1;

//**********   programme main   **********//

int	main(void)
{
	printf("gl_var:	[%d],\n", gl_var); // ici on affiche les var declarees
	printf("f():	[%d],\n\n", f());

	printf("gl_var:	[%d],\n", var1::gl_var); // ici on affiche les namespaces
	printf("f():	[%d],\n\n", var1::f());

	printf("gl_var:	[%d],\n", var2::gl_var);
	printf("f():	[%d],\n\n", var2::f());

	printf("gl_var:	[%d],\n", var3::gl_var);
	printf("f():	[%d],\n\n", var3::f());

	printf("gl_var:	[%d],\n", var4::gl_var);
	printf("f():	[%d],\n\n", var4::f());

	printf("gl_var:	[%d],\n", ::gl_var); // a nouveau les var declarees
	printf("f():	[%d],\n\n", ::f()); // un peu overkill, privilegier f()

	return (0);
}

