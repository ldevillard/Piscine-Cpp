/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:33:31 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 20:17:04 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string name) :
	_name(name)
{
	std::cout << "Some random victim called " + _name + " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + _name + " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	_name = copy.getName();
	std::cout << "Some random victim called " + _name + " just appeared!" << std::endl;
}

Victim	&Victim::operator=(const Victim &copy)
{
	this->_name = copy.getName();
	return (*this);
}

std::string	Victim::introduce() const
{
	return "I'm " + _name + " and I like otters!";
}

std::ostream	&operator<<(std::ostream &out, const Victim &src)
{
	out << src.introduce() << std::endl;
	return (out);
}

void	Victim::getPolymorphed() const
{
	std::cout << _name + " has been turned into a cute little sheep!" << std::endl;
}