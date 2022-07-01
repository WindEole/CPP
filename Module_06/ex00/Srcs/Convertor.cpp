/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:21:38 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/23 14:21:41 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Convertor::Convertor(void)							// constructeur par défaut
{
	this->_type = -1;
	std::cout << "Convertor Default constructor called." << std::endl;
	return;
}

Convertor::Convertor(Convertor const &copy)			// constructeur par copie
{
	*this = copy;
	std::cout << "Convertor Copy constructor called." << std::endl;
	return;
}

Convertor::~Convertor(void)							// destructeur
{
	std::cout << "Convertor Destructor called." << std::endl;
	return;
}

//------------------------------   SURCHARGES   ------------------------------//

Convertor		&Convertor::operator=(Convertor const &rhs)	// surcharge d'assignation
{
	std::cout << "Convertor Assignment operator called." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return(*this);
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

//--------------   Determination du type de l'argument entré   ---------------//

bool 	isChar(const char* value)
{
	std::string		newValue(value);

	if (newValue.length() != 1)
		return false;		
	if (isdigit(value[0]))
		return false;	
	return true;
}

bool	isFloat(const char* value)
{
	std::string		newValue(value);
	std::string		specials[3] = {"-inff", "+inff", "nanf"};
	int				i = -1;
	size_t			t = -1;
	int 			c = 0;
	unsigned long	u = -1;

	while (++i < 3)
		if (specials[i] == newValue)
			return true;

	if (value[newValue.length() - 1] != 'f')
		return false;

	while (++t < newValue.length())
		if (value[t] == '.')
			c++;
	if (c > 1)
		return false;

	while (++u < (newValue.length() - 2))
	{
		if (u == 0 && (value[u] == '-' || value[u] == '+'))
			u++;
		if (!isdigit(value[u]) && value[u] != '.')
			return false;
	}
	return true;
}

bool	isDouble(const char* value)
{
	std::string		newValue(value);
	std::string 	specials[3] = {"-inf", "+inf", "nan"};
	int				i = -1;
	size_t			t = -1;
	int 			c = 0;

	while (++i < 3)
		if (specials[i] == newValue)
			return true;

	while (++t < newValue.length())
		if (value[t] == '.')
			c++;
	if (c == 0)
		return false;

	t = -1;
	while (++t < newValue.length())
	{
		if (t == 0 && (value[t] == '-' || value[t] == '+'))
			t++;
		if (!isdigit(value[t]) && value[t] != '.')
			return false;
	}
	return true;
}

bool	isInt(const char* value)
{
	std::string		newValue(value);
	size_t			i = -1;

	if (newValue.length() == 0)
		return false;

	while (i < newValue.length())
	{
		if (i == 0 && (value[i] == '-' || value[i] == '+'))
			i++;
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

void	Convertor::analyseType(const char *input)
{
	bool	(*isTab[4])(const char *input) = {isChar, isFloat, isDouble, isInt};
	int		typeTab[4] = {0, 1, 2, 3};
	int		i = 0;

	while (i < 4)
	{
		if (isTab[i](input))
		{
			this->_type = typeTab[i];
				if (this->_type == 0)
					break;
		}
		i++;
	}
	if (this->_type == -1)
		throw (Convertor::NotConvertible());
}

//------------------------   Conversion et display   -------------------------//

void	displayChar(char c)
{
	std::cout << "char :		" << c << std::endl;
//----//
	std::cout << "int : 		" << static_cast<int>(c) << std::endl;
//----//
	std::cout << "float :		" << static_cast<float>(c) << "f" << std::endl;
//----//
	std::cout << "double :	" << static_cast<double>(c) << std::endl;
}

void	displayInt(int i)
{
	std::cout << "char :		";
	if (i >= 0 && i <= 255 && !isprint(i))
		std::cout << "Non displayable" << std::endl;
	else if (i < 0 || i > 255)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
//----//
	std::cout << "int : 		" << i << std::endl;
//----//
	std::cout << "float :		" << static_cast<float>(i) << "f" << std::endl;
//----//
	std::cout << "double :	" << static_cast<double>(i) << std::endl;
}

void	displayFloat(float f)
{
	std::cout << "char :		";
	if ((f >= 0 && f <= 255 && !isprint(f)) || (f > 255 && f <= std::numeric_limits<int>::max()))
		std::cout << "Non displayable" << std::endl;
	else if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || isnan(f))
		std::cout << "impossible" << std::endl;
	else if (f < 0 || f > 255)
		std::cout << "CImpossible" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
//----//
	std::cout << "int : 		";
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || isnan(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
//----//
	std::cout << "float :		" << f << "f" << std::endl;
//----//
	std::cout << "double :	" << static_cast<double>(f) << std::endl;
}

void	displayDouble(double d)
{
	std::cout << "char :		";
	if ((d >= 0 && d <= 255 && !isprint(d)) || (d > 255 && d <= std::numeric_limits<int>::max()))
		std::cout << "Non displayable" << std::endl;
	else if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || isnan(d))
		std::cout << "impossible" << std::endl;
	else if (d < 0 || d > 255)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
//----//
	std::cout << "int : 		";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || isnan(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
//----//
	std::cout << "float :		" << static_cast<float>(d) << "f" << std::endl;
//----//
	std::cout << "double :	" << d << std::endl;
}

void	Convertor::print(const char *input)
{
	if (this->_type == 0)						// input is a char
		displayChar(input[0]);
	if (this->_type == 1)						// input is an int
		displayInt(atoi(input));
	if (this->_type == 2)						// input is a float
		displayFloat(strtof(input, NULL));
	if (this->_type == 3)						// input is a double
		displayDouble(strtod(input, NULL));
}
