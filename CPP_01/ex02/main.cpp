/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:41:41 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 11:30:15 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int	main()
{
	Zombie *z1;
	Zombie z2("Yves", 5);
	ZombieEvent event;

	z2.advert();

	event.setZombieType(3);
	z1 = event.newZombie("Florence");
	z1->advert();
	delete z1;

	event.randomChump();
	return (0);
}