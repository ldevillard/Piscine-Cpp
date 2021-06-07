/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:43:24 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 14:56:59 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int	main()
{
	srand(time(0)); //Init seed for random generation
	ZombieHorde horde(15);

	horde.announce();
	return (0);
}