/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:47:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 19:54:40 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

Peon	&Peon::operator=(const Peon &copy)
{
	this->_name = copy.getName();
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << _name + " has been turned into a pink pony!" << std::endl;
}