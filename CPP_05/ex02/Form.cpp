/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:21:02 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 16:03:05 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signedGrade, int execGrade) :
	_name(name), _signed(false), _requiredSignedGrade(signedGrade), _requiredExecGrade(execGrade)
{
	if (_requiredExecGrade < 1 || _requiredSignedGrade < 1)
		throw Form::GradeTooHighException();
	else if (_requiredExecGrade > 150 || _requiredSignedGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) :
	_name(copy.getName()), _signed(copy.getSigned()),
	_requiredSignedGrade(copy.getSignedGrade()), _requiredExecGrade(copy.getExecGrade())
{
}

Form	&Form::operator=(const Form & copy)
{
	(void)copy;
	std::cout << "*useless* operator= called" << std::endl;
	return *this;
}

Form::~Form()
{
}

std::ostream	&operator<<(std::ostream &out, const Form &src)
{
	if (src.getSigned() == false)
		out << src.getName() + " isn't signed, form grades " << src.getSignedGrade() << " " << src.getExecGrade() << std::endl;
	else
		out << src.getName() + " is signed, form grades " << src.getSignedGrade() << " " << src.getExecGrade() << std::endl;
	return out;
}

void	Form::beSigned(const Bureaucrat &worker)
{
	if (worker.getGrade() > _requiredSignedGrade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}