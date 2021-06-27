/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bowman.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:08:13 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 20:11:17 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bowman.hpp"

Bowman::Bowman(const std::string name) : Victim(name)
{
	std::cout << "Go go go !" << std::endl;
}

Bowman::~Bowman()
{
	std::cout << "He took an arrow in his knee" << std::endl;
}

Bowman::Bowman(const Bowman &copy) : Victim(copy)
{
	std::cout << "Go go go !" << std::endl;
}

Bowman	&Bowman::operator=(const Bowman &copy)
{
	this->_name = copy.getName();
	return (*this);
}

void	Bowman::getPolymorphed() const
{
	std::cout << _name + " has been turned into a rainbow pony!" << std::endl;
}