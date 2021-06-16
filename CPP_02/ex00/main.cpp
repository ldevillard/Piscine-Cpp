/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:07:22 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/16 09:11:17 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	b.setRawBits(10);

	c = b;
	
	std::cout << "a : " <<  a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;
	c.setRawBits(247);
	a = c;


	std::cout << std::endl;
	std::cout << "a : " <<  a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	return (0);
}
