/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:02:45 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/17 09:36:02 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << name + " is constructed :)" << std::endl << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << std::endl << _name + " is destruct :(" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << BLUE;
	std::cout << "FR4G-TP " + _name + " attaque " + target + " à distance, causant " << _rangedAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << YELLOW;
	std::cout << "FR4G-TP " + _name + " attaque " + target + " au corps à corps, causant " << _meleeAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_armorDamageReduction > 0)
		_hitPoints += _armorDamageReduction;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_hitPoints <= 0)
		_hitPoints = 0;
	std::cout << RED;
	std::cout << "FR4G-TP " + _name + " prend " << amount << " dêgats, il a maintenant " << _hitPoints << " points de vie" << std::endl;
	std::cout << RESET;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << GREEN;
	std::cout << "FR4G-TP " + _name + " est réparé et il a " << _hitPoints << " points de vie" << std::endl;
	std::cout << RESET;
}