/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:44:41 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:51:20 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
}

SuperMutant	&SuperMutant::operator=(const SuperMutant & copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (_hp - (damage + 3) > 0)
		_hp -= damage + 3;
	else
		_hp = 0;
}