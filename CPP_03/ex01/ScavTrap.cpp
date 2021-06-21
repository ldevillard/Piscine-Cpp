/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:42:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/21 16:26:42 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << name + " est prêt à tenir la porte :)" << std::endl << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::endl << _name + " en a marre et se casse :(" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << BLUE;
	std::cout << "SC4V-TP " + _name + " attaque " + target + " avec le loquet, causant " << _rangedAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << YELLOW;
	std::cout << "SC4V-TP " + _name + " attaque " + target + " en claquant la porte, causant " << _meleeAttackDamage << " points de dégâts" << std::endl;
	std::cout << RESET;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_armorDamageReduction > 0)
		_hitPoints += _armorDamageReduction;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_hitPoints <= 0)
		_hitPoints = 0;
	std::cout << RED;
	std::cout << "SC4V-TP " + _name + " prend " << amount << " dêgats, il a maintenant " << _hitPoints << " points de vie" << std::endl;
	std::cout << RESET;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << GREEN;
	std::cout << "SC4V-TP " + _name + " est réparé et il a " << _hitPoints << " points de vie et " << _energyPoints << " points d'énergie" << std::endl;
	std::cout << RESET;
}

void	ScavTrap::challengeNewcomer(void) const
{
	int	i = 0;
	std::string	answer;
	std::string	questions[3] = {"Plus je suis vieux, plus je suis fort ! Qui suis-je ?",
								"Que signifie : int *tab = malloc(sizeof(int) * 8); [...] tab[8] = 42; ?",
								"Si on me décale de 8 bits vers la gauche je vaux 256 ! Qui suis-je ? Astuce : 256 = x << 8"};

	std::cout << "Prend un nombre entre 1 et 3 inclus !" << std::endl;
	std::cin >> i;
	while (!(i >= 1 && i <= 3))
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "Prend un chiffre entre 1 et 3 inclus !" << std::endl;
		std::cin >> i;
	}
	std::cout << YELLOW;
	std::cout << questions[i - 1] << std::endl;
	std::cout << RESET;
	std::cin >> answer;
	if (i == 1 && answer == "fromage")
	{
		std::cout << GREEN;
		std::cout << "Bonne réponse !" << std::endl;
		std::cout << RESET;
	}
	else if (i == 2 && answer == "segfault")
	{
		std::cout << GREEN;
		std::cout << "Bonne réponse !" << std::endl;
		std::cout << RESET;
	}
	else if (i == 3 && answer == "1")
	{
		std::cout << GREEN;
		std::cout << "Bonne réponse !" << std::endl;
		std::cout << RESET;
	}
	else
	{
		std::cout << RED;
		std::cout << "Mauvaise réponse !" << std::endl;
		std::cout << RESET;
	}
}