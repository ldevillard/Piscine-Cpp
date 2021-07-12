/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:25:26 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/09 10:57:10 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> tab;

	tab.push_back(3);
	tab.push_back(21);
	tab.push_back(65);
	tab.push_back(7);

	try
	{
		std::vector<int>::iterator it = easyfind(tab, 65);
		std::cout << *it << std::endl;
		it = easyfind(tab, 5);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}