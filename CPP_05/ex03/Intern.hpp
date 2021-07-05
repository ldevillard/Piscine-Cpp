/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:38:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/05 17:49:17 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern	&operator=(const Intern &copy);
		~Intern();

		Form	*makeForm(std::string formName, std::string formTarget);

		Form	*makePresidentialPardonForm(std::string formTarget) const {return new PresidentialPardonForm(formTarget);}
		Form	*makeRobotomyRequestForm(std::string formTarget) const {return new RobotomyRequestForm(formTarget);}
		Form	*makeShrubberyCreationForm(std::string formTarget) const {return new ShrubberyCreationForm(formTarget);}
};

#endif