/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:33 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 16:08:59 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bobby("Bobby", 100);
		Form	Bill("Bill", 50, 50);
		std::cout << Bobby;
		Bobby.signForm(Bill);
		std::cout << Bill;
		
		std::cout << "------------------" << std::endl;
		Bureaucrat Mat("Mat", 2);
		Form	Bill2("Bill2", 50, 50);
		Mat.signForm(Bill2);
		std::cout << Bill2;
		
		std::cout << "------------------" << std::endl;
		Bureaucrat Jim("Jim", 120);
		Form	Bill3("Bill3", 50, 50);
		Bill3.beSigned(Jim);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}