/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:03:15 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/05 17:49:30 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	typedef Form* (Intern::*createForms)(std::string formTarget) const;

	int i = 0;
	createForms ftab[3] = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	while (i < 3)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " + formName <<std::endl;
			return (this->*ftab[i])(formTarget);
		}
		i++;
	}
	std::cout << "Error : can't create form like : " + formName + "." << std::endl;
	return NULL;
}