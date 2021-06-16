/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:52:20 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/16 11:31:37 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor" << std::endl;
	*this = src;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor" << std::endl;
	_value = integer << _bits; // = integer x 2 puissance _bits
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor" << std::endl;
	_value = roundf(floating * (1 << _bits)); // = roundf(floating x 2 puissance _bits)
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Operator" << std::endl;
	this->_value = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits function" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits function" << std::endl;
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (_value / (float)(1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}