/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:30:21 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 14:47:40 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	int	i;
	
	i = 0;
	if (n <= 0)
		std::cout << "Error argument !" << std::endl;
	else
		mHorde = new Zombie[n];
	mN = n;
}

ZombieHorde::~ZombieHorde()
{
	if (mN > 0)
		delete [] mHorde;
}

void	ZombieHorde::announce() const
{
	int	i;

	i = 0;
	while (i < mN)
	{
		mHorde[i].announce();
		i++;
	}
}
