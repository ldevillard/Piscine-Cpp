/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:33:25 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 10:46:39 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	mName = "Walkers";
	mType = 1;
}

Zombie::Zombie(std::string name, int type)
{
	mName = name;
	mType = type;
}

Zombie::~Zombie()
{
	
}

void	Zombie::advert() const
{
	std::cout << "<" + mName + " (" << mType << ")> Braiiiiiiinnnssss ...";
	std::cout << std::endl;
}