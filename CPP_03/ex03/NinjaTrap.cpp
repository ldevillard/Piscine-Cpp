/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:06:50 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 10:15:56 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << name + "(NinjaTrap) est construit :)" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name + "(NinjaTrap) est détruit :(" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &ref)
{
	std::cout << _name + " donne un coup de katana sur " + ref.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &ref)
{
	std::cout << _name + " étrangle dans l'ombre " + ref.get_name() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &ref)
{
	std::cout << _name + " détruit " + ref.get_name() + " à l'aide d'un shuriken" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ref)
{
	std::cout << _name + " rejoint " + ref.get_name() + " pour former une équipe" << std::endl;
}