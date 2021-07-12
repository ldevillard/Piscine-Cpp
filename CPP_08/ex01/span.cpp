/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:05:27 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/12 17:14:46 by ldevilla         ###   ########lyon.fr   */
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
	std::vector<int> buf(_tab);
	std::vector<int>::iterator it = _tab.begin();
	int smallest = *it;
	int i = 0;

	if (_stored <= 1)
		throw NoSpanToFind();
	while (it != _tab.end())
	{
		if (i++ == _stored)
			break;
		if (smallest > *it)
			smallest = *it;
		it++;
	}

	i = 0;
	it = _tab.begin();
	int smallNext = *it;
	while (it != _tab.end())
	{
		if (i++ == _stored)
			break;
		if (smallNext > *it && *it > smallest)
			smallNext = *it;
		else if (smallNext == smallest)
			smallNext = *it;
		it++;
	}
	return smallNext - smallest;
}

int Span::longestSpan()
{
	std::vector<int> buf(_tab);
	std::vector<int>::iterator it = _tab.begin();
	int smallest = *it;
	int biggest = *it;
	int i = 0;

	if (_stored <= 1)
		throw NoSpanToFind();
	while (it != _tab.end())
	{
		if (i++ == _stored)
			break;
		if (smallest > *it)
			smallest = *it;
		if (biggest < *it)
			biggest = *it;
		it++;
	}
	return biggest - smallest;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
		*start++ = randomNumber();
	_stored = _tab.size();
}
