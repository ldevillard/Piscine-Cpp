/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:33 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/05 16:35:30 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bobby("Bobby", 100);
		ShrubberyCreationForm Bill("home");
		std::cout << Bobby;
		Bobby.signForm(Bill);
		std::cout << Bill;
		Bobby.executeForm(Bill);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	try
	{
		std::cout << "---------------" << std::endl;

		Bureaucrat Jim("Jim", 5);
		PresidentialPardonForm Bill2("yourDog");
		std::cout << Jim;
		Jim.signForm(Bill2);
		std::cout << Bill2;
		Jim.executeForm(Bill2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	try
	{
		std::cout << "---------------" << std::endl;

		Bureaucrat Max("Max", 40);
		RobotomyRequestForm Bill3("André");
		std::cout << Max;
		Max.signForm(Bill3);
		std::cout << Bill3;
		Max.executeForm(Bill3);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	try
	{
		std::cout << "---------------" << std::endl;

		Bureaucrat JeanMi("JeanMi", 140);
		ShrubberyCreationForm Bill4("André");
		std::cout << JeanMi;
		JeanMi.signForm(Bill4);
		std::cout << Bill4;
		JeanMi.executeForm(Bill4);
		//Try to execute it even if grade's too low
		Bill4.execute(JeanMi);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}