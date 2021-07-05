/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:10:36 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/05 17:54:57 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool	_signed;
		const int	_requiredSignedGrade;
		const int	_requiredExecGrade;
		Form();
	public:
		Form(std::string name, int signedGrade, int execGrade);
		Form(const Form &copy);
		Form	&operator=(const Form &copy);
		virtual ~Form();

		int getSignedGrade() const {return _requiredSignedGrade;}
		int getExecGrade() const {return _requiredExecGrade;}
		std::string getName() const {return _name;}
		bool getSigned() const {return _signed;}

		void	beSigned(const Bureaucrat &worker);
		virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char * what () const throw ()
		{
			return "\e[0;31mError : grade is too high !\e[0m";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char * what () const throw ()
		{
			return "\e[0;31mError : grade is too low !\e[0m";
		}
	};

	class NotSignedException : public std::exception
	{
		const char * what () const throw ()
		{
			return "\e[0;31mError : form isn't signed !\e[0m";
		}
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &);

#endif