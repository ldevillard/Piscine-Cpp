/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:33:34 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 13:54:47 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _army(NULL), _count(0)
{
}

Squad &Squad::operator=(const Squad & copy)
{
	this->_army = copy.getArmy();
	this->_count = copy.getCount();
	return *this;
}

Squad::Squad(const Squad & copy)
{
	*this = copy;
}

Squad::~Squad()
{
	t_list *buf;

	while (_army)
	{
		buf = _army;
		_army = _army->next;
		delete buf->content;
		delete buf;
	}
}

int	Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	int j = 0;
	t_list *tmp = this->_army;

	while (j < i && tmp)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp->content);
}

int	Squad::push(ISpaceMarine* src)
{
	t_list *tmp = _army;
	t_list *newList;

	if (_army == NULL)
	{
		_army = new t_list;
		_army->content = src;
		_army->next = NULL;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		newList = new t_list;
		newList->content = src;
		newList->next = NULL;
		tmp->next = newList;
	}
	_count++;
	return _count;
}