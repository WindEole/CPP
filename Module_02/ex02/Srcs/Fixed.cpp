/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:46:04 by iderighe          #+#    #+#             */
/*   Updated: 2022/06/09 12:46:07 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
	return;
}

Fixed::Fixed(Fixed const & fixed)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::Fixed(const int n)
{
//	std::cout << "Int Constructor called" << std::endl;
	this->_nb = n << this->_fb;
	return;
}

Fixed::Fixed(const float n)
{
//	std::cout << "Float Constructor called" << std::endl;
	this->_nb = roundf(n * (1 << this->_fb)); // roundf(x) returns the value of x rounded to the nearest integral (as a floating-point value).
	return;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;	
	this->_nb = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	float	res = (float)(this->_nb) / (1 << this->_fb);
	return (res);
}

int		Fixed::toInt(void) const
{
	int	res = (int)(this->_nb) / (1 << this->_fb);
	return (res);
}

Fixed			&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed		&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed			&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed		&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

//------------------------------   SURCHARGES   ------------------------------//

// surcharge d'assignation   -------------------------------------------------//

Fixed	&Fixed::operator=(Fixed const &rhs)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

// surcharge d'operateurs arithmetiques   ------------------------------------//

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	res;
	res.setRawBits(this->_nb + rhs.getRawBits());
	return (res);
}
	
Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	res;
	res.setRawBits(this->_nb - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	res;
	res.setRawBits(this->_nb * rhs.getRawBits() / (1 << this->_fb));
	return (res);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	Fixed	res;
	res.setRawBits((float)(this->_nb) / (float)rhs.getRawBits() * (float)(1 << this->_fb));
	return (res);
}

// surcharge d'operateurs de comparaison   -----------------------------------//

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_nb > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_nb < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_nb >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_nb <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_nb == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_nb != rhs.getRawBits());
}

// surcharges d'operateurs in/de/crementation   ------------------------------//

Fixed	&Fixed::operator++()
{
	++this->_nb;
	return (*this);
}
		
Fixed	&Fixed::operator--()
{
	--this->_nb;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++this->_nb;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->_nb;
	return (tmp);
}

// surcharges d'ostream (fct non membre)   -----------------------------------//

std::ostream	&operator<<(std::ostream & o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
