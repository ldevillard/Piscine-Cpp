/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:13:57 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:27:57 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _damage(damage), _apcost(apcost)
{
}

AWeapon::AWeapon(const AWeapon &copy)
{
	this->_name = copy.getName();
	this->_damage = copy.getDamage();
	this->_apcost = copy.getAPCost();
}

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	this->_name = copy.getName();
	this->_damage = copy.getDamage();
	this->_apcost = copy.getAPCost();
	return *this;
}

AWeapon::~AWeapon()
{
}