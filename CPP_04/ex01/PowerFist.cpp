/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:31:18 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:32:31 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy)
{
}

PowerFist	&PowerFist::operator=(const PowerFist &copy)
{
	this->_name = copy.getName();
	this->_damage = copy.getDamage();
	this->_apcost = copy.getAPCost();
	return *this;
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}