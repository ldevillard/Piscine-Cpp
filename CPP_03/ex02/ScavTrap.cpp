/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:42:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 09:36:33 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << name + "(ScavTrap) est prêt à tenir la porte :)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name + "(ScavTrap) en a marre et se casse :(" << std::endl;
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