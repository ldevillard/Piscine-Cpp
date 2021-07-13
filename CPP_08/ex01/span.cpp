/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:05:27 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 16:37:15 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _size(N), _stored(0)
{
	_tab = std::vector<int>(_size);
	_it = _tab.begin();
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_size = copy.getSize();
		_tab = copy.getTab();
	}
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if (_stored == _size)
		throw FullFilled();
	else
	{
		*_it++ = nb;
		_stored++;
	}
}

int Span::shortestSpan()
{
	if (_stored <= 1)
		throw NoSpanToFind();
	std::sort(_tab.begin(), _tab.end());
	
	std::vector<int>::iterator it = _tab.begin();
	std::vector<int>::iterator itP = _tab.begin();
	itP++;
	int result = *itP++ - *it++;
	while (itP != _tab.end())
		result = std::min(result, (*itP++ - *it++));
	return result;
}

int Span::longestSpan()
{
	if (_stored <= 1)
		throw NoSpanToFind();
	int max = *(std::max_element(_tab.begin(), _tab.end()));
	int min = *(std::min_element(_tab.begin(), _tab.end()));
	return max - min;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
		*start++ = randomNumber();
	_stored = _tab.size();
}
