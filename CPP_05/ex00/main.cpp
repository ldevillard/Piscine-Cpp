/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:33 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 14:58:10 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bobby("Bobby", 28);
		std::cout << Bobby;
		std::cout << "----------------" << std::endl;
		Bureaucrat Mat("Mat", 3);
		for (int i = 0; i < 3; i++)
		{
			Mat.incrementGrade();
			std::cout << Mat;
		}
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}