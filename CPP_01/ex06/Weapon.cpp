/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:13:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 11:14:58 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : mType("Unknown")
{
}

Weapon::Weapon(std::string type) : mType(type)
{
}

const std::string	&Weapon::getType()
{
	return (mType);
}

void	Weapon::setType(std::string type)
{
	mType = type;
}