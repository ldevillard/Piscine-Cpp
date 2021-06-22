/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 09:27:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 14:00:10 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap	Robot("Robot");

	FragTrap	R2D2("R2D2");
	FragTrap	C3PO("C3PO");

	ScavTrap	Scav1("Scav1");
	ScavTrap	Scav2("Scav2");
	
	NinjaTrap	Naruto("Naruto");
	NinjaTrap	Sasuke("Sasuke");

	SuperTrap	JusteTropFortEnFait("JusteTropFortEnFait");

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
	//Scav2.challengeNewcomer();
	std::cout << std::endl;
	Naruto.meleeAttack("Scav2");
	Naruto.takeDamage(15);
	std::cout << "\e[35m";
	Naruto.ninjaShoebox(R2D2);
	Naruto.ninjaShoebox(Robot);
	Naruto.ninjaShoebox(Scav1);
	Sasuke.ninjaShoebox(Naruto);
	std::cout << "\e[0m";
	std::cout << std::endl;
	JusteTropFortEnFait.rangedAttack("Sasuke");
	JusteTropFortEnFait.meleeAttack("Naruto");
	JusteTropFortEnFait.ninjaShoebox(Sasuke);
	return (0);
}