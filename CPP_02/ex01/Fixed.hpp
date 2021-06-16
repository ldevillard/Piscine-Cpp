/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:36:14 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/16 11:25:21 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(); //default constructor
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed &); //copy constructor
		~Fixed(); //destructor
		
		Fixed	&operator=(const Fixed &);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	_value;
		static int const _bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &);

#endif