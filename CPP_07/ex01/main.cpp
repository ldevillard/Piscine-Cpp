/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:46:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/07 15:09:02 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

# define BLUE "\e[1;34m"
# define GREEN "\e[1;32m"
# define RESET "\e[0m"

void	strToUpper(std::string *str)
{
	int i = 0;

	while (i < (int)str->size())
	{
		str->at(i) = toupper(str->at(i));
		i++;
	}
}

int main()
{
	int digit[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float floatDigit[] = {0.1f, 1.1f, 2.1f, 3.1f, 4.1f, 5.1f, 6.1f, 7.1f, 8.1f, 9.1f};
	std::string names[] = {"yann", "bob", "jim", "mat", "oliver"};

	std::cout << BLUE;

	//PRINT
	for (int i = 0; i < 9; i++)
		std::cout << digit[i] << ", ";
	std::cout << digit[9] << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << names[i] << ", ";
	std::cout << names[4] << std::endl;

	for (int i = 0; i < 9; i++)
		std::cout << floatDigit[i] << ", ";
	std::cout << floatDigit[9] << std::endl;
	
	iter(digit, 10, &increment);
	iter(names, 5, &strToUpper);
	iter(floatDigit, 10, &increment);

	std::cout << GREEN << std::endl;

	//PRINT
	for (int i = 0; i < 9; i++)
		std::cout << digit[i] << ", ";
	std::cout << digit[9] << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << names[i] << ", ";
	std::cout << names[4] << std::endl;

	for (int i = 0; i < 9; i++)
		std::cout << floatDigit[i] << ", ";
	std::cout << floatDigit[9] << std::endl;

	std::cout << RESET;

	return 0;
}