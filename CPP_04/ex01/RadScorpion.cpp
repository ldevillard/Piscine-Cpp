/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:54:26 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:55:29 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
}

RadScorpion	&RadScorpion::operator=(const RadScorpion & copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
	if (_hp - (damage + 3) > 0)
		_hp -= damage + 3;
	else
		_hp = 0;
}