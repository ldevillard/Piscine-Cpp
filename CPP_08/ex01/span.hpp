/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:58:28 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 16:39:36 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _tab;
		int	_size;
		int _stored;
		std::vector<int>::iterator _it;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span & copy);
		~Span();

		int getSize() const {return _size;}
		std::vector<int> getTab() const {return _tab;}

		std::vector<int>::iterator	begin() {return _tab.begin();}
		std::vector<int>::iterator	end() {return _tab.end();}

		void addNumber(int nb);
		int	randomNumber() const {return rand() % _size;}
		void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
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

		class RangeToHigh : public std::exception
		{
			const char * what () const throw ()
			{
				return "Error: your tab is too small to store this range!";
			}
		};
};

#endif