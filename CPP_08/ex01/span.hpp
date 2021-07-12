/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:58:28 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/12 09:37:03 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>

class Span
{
	private:
		std::vector<int> _tab;
		int	_size;
		int _stored;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span & copy);
		~Span();

		int getSize() const {return _size;}
		std::vector<int> getTab() const {return _tab;}

		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();

		class FullFilled : public std::exception
		{
			const char * what () const throw ()
			{
				return "Error: full filled!";
			}
		};

		class NoSpanToFind : public std::exception
		{
			const char * what () const throw ()
			{
				return "Error: you don't have enough numbers stored";
			}
		};
};

#endif