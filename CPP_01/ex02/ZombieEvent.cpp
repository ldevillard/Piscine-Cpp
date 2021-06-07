/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:55:13 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 11:30:29 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(int type)
{
	mType = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *ret = new Zombie(name, mType);
	return (ret);
}

void	ZombieEvent::randomChump() const
{
	int	i;
	char names[10][15] = {"Richard", "Josée", "Antoinette", "Martine", "Jean-Eude",
							"Daniel", "Paul", "Gustave", "Odile", "Pascal"};

	srand(time(0));
	i = (rand() % 10);
	Zombie zomb(names[i], 2);
	zomb.advert();
}