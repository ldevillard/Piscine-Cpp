/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:33:25 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 14:47:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	mName = get_name();
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

std::string	Zombie::get_name()
{
	int	i;
	char names[15][15] = {"Richard", "Josée", "Antoinette", "Martine", "Jean-Eudes",
							"Daniel", "Paul", "Gustave", "Odile", "Pascal",
						"Unestach", "Deustach", "Troistach", "Quatrestach", "Cinqstach"};

	i = (rand() % 15);
	return (names[i]);
}

void	Zombie::set_name(std::string name)
{
	mName = name;
}

void	Zombie::announce() const
{
	std::cout << "<" + mName + " (" << mType << ")> Braiiiiiiinnnssss ...";
	std::cout << std::endl;
}