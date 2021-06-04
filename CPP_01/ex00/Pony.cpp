/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:34:25 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/04 10:51:22 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::pony_init(std::string name, std::string color, int heigt, int age)
{
	p_name = name;
	p_color = color;
	p_heigt = heigt;
	p_age = age;
}

void	Pony::pony_display_info() const
{
	std::cout << "Pony's name : [" << "\e[1;33m" << p_name << "\e[0m" << "]" << std::endl;
	std::cout << "Pony's color : [" << "\e[1;33m" << p_color << "\e[0m" << "]" << std::endl;
	std::cout << "Pony's heigt in cm : [" << "\e[1;33m" << p_heigt << "\e[0m" << "]" << std::endl;
	std::cout << "Pony's age in years : [" << "\e[1;33m" << p_age << "\e[0m" << "]" << std::endl;
}