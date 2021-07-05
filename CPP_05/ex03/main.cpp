/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:33 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/05 17:56:51 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Form*	rrf;
	try
	{
		Intern	someRandomIntern;
		Bureaucrat JeanMi("JeanMi", 140);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << JeanMi;
		JeanMi.signForm(*rrf);
		std::cout << *rrf;
		JeanMi.executeForm(*rrf);
		//Try to execute it even if grade's too low
		rrf->execute(JeanMi);

	}
	catch(std::exception & e)
	{
		delete rrf;
		std::cout << e.what() << std::endl;
		return 1;
	}
	delete rrf;
	return 0;
}