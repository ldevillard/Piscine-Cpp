/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:49:58 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 11:15:10 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : mName(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	Weapon &tmp = *mWeapon;
	std::cout << mName + " attacks with his " << tmp.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	mWeapon = &weapon;
}