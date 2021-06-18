/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 09:27:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/17 09:46:24 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	R2D2("R2D2");

	R2D2.meleeAttack("Nothing");
	R2D2.takeDamage(200);
	R2D2.beRepaired(150);
	R2D2.takeDamage(70);
	return (0);
}