/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:52:18 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 09:36:36 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 100;
	_rangedAttackDamage = 100;
	_armorDamageReduction = 100;
	std::cout << name + "(ClapTrap) est construit :)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name + "(ClapTrap) est détruit :(" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << BLUE;
	std::cout << "CL4P-TP " + _name + " attaque " + target + " à distance, causant " << _rangedAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << YELLOW;
	std::cout << "CL4P-TP " + _name + " attaque " + target + " au corps à corps, causant " << _meleeAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_armorDamageReduction > 0)
		_hitPoints += _armorDamageReduction;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_hitPoints <= 0)
		_hitPoints = 0;
	std::cout << RED;
	std::cout << "CL4P-TP " + _name + " prend " << amount << " dêgats, il a maintenant " << _hitPoints << " points de vie" << std::endl;
	std::cout << RESET;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << GREEN;
	std::cout << "CL4P-TP " + _name + " est réparé et il a " << _hitPoints << " points de vie et " << _energyPoints << " points d'énergie" << std::endl;
	std::cout << RESET;
}
