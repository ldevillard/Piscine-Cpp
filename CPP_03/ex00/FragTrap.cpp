/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:02:45 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 09:57:22 by ldevilla         ###   ########lyon.fr   */
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
	std::cout << name + " est construit :)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name + " est détruit :(" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << BLUE;
	std::cout << "FR4G-TP " + _name + " attaque " + target + " à distance, causant " << _rangedAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	FragTrap::meleeAttack(std::string const &target) const
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
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << GREEN;
	std::cout << "FR4G-TP " + _name + " est réparé et il a " << _hitPoints << " points de vie et " << _energyPoints << " points d'énergie" << std::endl;
	std::cout << RESET;
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
