/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:52:20 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/16 09:16:14 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default construcor" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy construcor" << std::endl;
	_value = src.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Operator" << std::endl;
	this->_value = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function" << std::endl;
	_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}