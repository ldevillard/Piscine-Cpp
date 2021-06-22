/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 09:27:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/21 16:28:29 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	FragTrap	R2D2("R2D2");
	FragTrap	C3PO("C3PO");

	ScavTrap	Scav1("Scav1");
	ScavTrap	Scav2("Scav2");

	srand(time(0)); //Set generator for random
	R2D2.meleeAttack("C3PO");
	C3PO.takeDamage(30);
	std::cout << std::endl;
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.vaulthunter_dot_exe("R2D2");
	std::cout << std::endl;
	R2D2.takeDamage(70);
	R2D2.beRepaired(150);
	C3PO.beRepaired(42);
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.vaulthunter_dot_exe("R2D2");
	C3PO.beRepaired(84);
	R2D2.takeDamage(150);

	std::cout << std::endl;
	Scav1.meleeAttack("Scav2");
	Scav1.rangedAttack("Scav2");
	Scav2.beRepaired(10);
	Scav2.challengeNewcomer();
	
	return (0);
}