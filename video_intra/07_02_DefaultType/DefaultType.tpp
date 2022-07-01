/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DefaultType.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:56:09 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/25 10:56:11 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float > // ici, float est le type par défaut : si le type de la
								// donnée n'est pas précisé, alors ce sera un float !
class Vertex
{
	public:
		Vertex( T const & x, T const & y, T const  & z) :_x( x ), _y( y ), _z( z ) {}
		~Vertex( void ) {}

		T const &	getX( void ) const { return this->_x; }
		T const &	getY( void ) const { return this->_y; }
		T const &	getZ( void ) const { return this->_z; }

		// Etc...
	
	private:
		T const		_x;
		T const		_y;
		T const		_z;

		Vertex( void );		// Constructeur par défaut en privé ! cela veut dire qu'on ne peut pas 
							// construire une instance de cette classe sans les parametres !
};

//----- ci-dessous : ca sert pour le debugage ! -----//

template< typename T > // donc ici on a 2 niveaux de templates : le template de classe T et le template
						// de surcharge d'operateur (T aussi...) => nested template !
std::ostream & operator<<( std::ostream & out, Vertex< T > const & v )
{
	std::cout.precision( 1 );
	out << setiosflags( std::ios::fixed );
	out << "Vertex( ";
	out << v.getX() << ", ";
	out << v.getY() << ", ";
	out << v.getZ() << ", ";
	out << " )";
	return (out);
}
