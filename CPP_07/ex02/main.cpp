/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:01:06 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 09:01:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<std::string> names(5);
	Array<int> digit(10);
	Array<double> DoubleTab(3);

	names[0] = "bob";
	names[1] = "jim";
	names[2] = "mat";
	names[3] = "oliver";
	names[4] = "mark";

	Array<std::string> newNames(names);
	newNames[4] = "john";

	for (int i = 0; i < 10; i++)
		digit[i] = i;

	DoubleTab[0] = 4.25;
	DoubleTab[1] = 42;
	DoubleTab[2] = 1080.720;

	for (int i = 0; i < names.size(); i++)
		std::cout << "names[" << i << "] : " << names[i] << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < digit.size(); i++)
		std::cout << "tab[" << i << "] : " << digit[i] << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < DoubleTab.size(); i++)
		std::cout << "DoubleTab[" << i << "] : " << DoubleTab[i] << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < newNames.size(); i++)
		std::cout << "newNames[" << i << "] : " << newNames[i] << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << DoubleTab[3] << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}