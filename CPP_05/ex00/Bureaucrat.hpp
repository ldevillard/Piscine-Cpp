/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:59:42 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 14:57:44 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

		int	getGrade() const {return _grade;}
		std::string getName() const {return _name;}

		void	incrementGrade();
		void	decrementGrade();

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
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &);

#endif