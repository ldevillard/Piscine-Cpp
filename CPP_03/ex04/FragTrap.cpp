/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:02:45 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 09:47:31 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << name + "(FragTrap) est construit :)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name + "(FragTrap) est détruit :(" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int	i;
	std::string	attacks[5] = {"Gogo Gadgeto dans ta tronche !",
								"Coup de claquette retourné",
								"Tonnerre de Pikachu",
								"Piratage de l'espace",
								"Outch KO de la moulinette"};

	i = (rand() % 5);
	if (_energyPoints - 25 < 0)
	{
		std::cout << "FR4G-TP " + _name + " n'a pas assez d'énergie !" << std::endl;
	}
	else
	{
		_energyPoints -= 25;
		std::cout << YELLOW;
		std::cout << "FR4G-TP " + _name + " utilise : " + attacks[i] + " sur " + target << std::endl;
		std::cout << RESET;
		std::cout << "FR4G-TP " + _name + " n'a plus que " << _energyPoints << " points d'énergie" << std::endl;
	}
}