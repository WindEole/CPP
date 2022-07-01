// # **************************************************************************** #
// #                                                                              #
// #                                                         :::      ::::::::    #
// #    Special.tpp                                        :+:      :+:    :+:    #
// #                                                     +:+ +:+         +:+      #
// #    By: iderighe <marvin@42.fr>                    +#+  +:+       +#+         #
// #                                                 +#+#+#+#+#+   +#+            #
// #    Created: 2022/06/25 14:43:51 by iderighe          #+#    #+#              #
// #    Updated: 2022/06/25 14:43:55 by iderighe         ###   ########.fr        #
// #                                                                              #
// # **************************************************************************** #

#include <iostream>
#include <iomanip>

//----- template generique ! -----//

template< typename T, typename U >
class Pair
{
	public:
		Pair< T, U >( T const & lhs, U const & rhs ) :_lhs( lhs ), _rhs( rhs )	// pour la specialisation
		{																		// partielle : si le 1er
			std::cout << "Generic template" << std::endl;						// param passé est un int,
			return;																// alors c'est le template
		}																		// typename U qui s'active
		~Pair< T, U >( void ) {}

		T const &	fst( void ) const { return this->_lhs; }
		U const &	scd( void ) const { return this->_rhs; }
	
	private:
		T const		_lhs;
		U const		_rhs;

		Pair< T, U >( void );		// Constructeur par défaut en privé ! cela veut dire qu'on ne peut pas 
									// construire une instance de cette classe sans les parametres !
};

//----- specialisation partielle ! -----//

template< typename U >
class Pair< int, U >	// specialisation partielle : le premier param est fixe (int), le 2eme est variable (U)
{
	public:
		Pair< int, U >( int lhs, U const & rhs ) :_lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Int partial specialization" << std::endl;
			return;
		}
		~Pair< int, U >( void ) {}

		int			fst( void ) const { return this->_lhs; }
		U const &	scd( void ) const { return this->_rhs; }

	private:
		int 		_lhs;
		U const &	_rhs;

		Pair< int, U >( void );
};

//----- specialisation complete ! -----//

template<>
class Pair< bool, bool >	// specialisation complete : les types de param sont fixes
{
	public:
		Pair< bool, bool >( bool lhs, bool rhs )
		{
			std::cout << "bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;	// operateur |= (ou / égal) !!!
			this->_n |= static_cast<int>(rhs) << 1;
			return;
		}
		~Pair< bool, bool >( void ) {}

		bool		fst( void ) const { return this->_n & 0x01; }
		bool		scd( void ) const { return this->_n & 0x02; }


	private:
		int 		_n;
	
		Pair< bool, bool >( void );
};

//----- ci-dessous : ca sert pour le debugage ! -----//

template< typename T, typename U > // donc ici on a 2 niveaux de templates : le template de classe T et le template
std::ostream & operator<<( std::ostream & out, Pair< T, U > const & p )	// de surcharge d'operateur (T aussi...) => nested template !
{
	out << "Pair( " << p.fst() << ", " << p.scd() << " )";
	return (out);
}

std::ostream & operator<<( std::ostream & out, Pair< bool, bool > const & p )
{
	out << std::boolalpha << "Pair( " << p.fst() << ", " << p.scd() << " )";	//boolalpha affiche true/false
	return (out);																//au lieu de 0/1
}
