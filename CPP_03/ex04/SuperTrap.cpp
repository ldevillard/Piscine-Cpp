/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:39:11 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 11:33:56 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << name + "(SuperTrap) est construit :)" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << _name + "(SuperTrap) est détruit :(" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target) const
{
	NinjaTrap::meleeAttack(target);
}