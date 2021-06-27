/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:22:30 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 19:44:56 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::		Sorcerer(const std::string name, const std::string title) :
	_name(name), _title(title)
{
	std::cout << _name + ", " + _title + " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy) : 
	_name(copy.getName()), _title(copy.getTitle())
{
	std::cout << _name + ", " + _title + " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name + ", " + _title + ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy)
{
	this->_name = copy.getName();
	this->_title = copy.getTitle();
	return *this;
}

std::string	Sorcerer::introduce() const
{
	return "I am "  + _name + ", " + _title + ", and I like ponies!";
}


std::ostream	&operator<<(std::ostream &out, const Sorcerer &src)
{
	out << src.introduce() << std::endl;
	return (out);
}

void Sorcerer::polymorph(Victim const &src) const
{
	src.getPolymorphed();
}