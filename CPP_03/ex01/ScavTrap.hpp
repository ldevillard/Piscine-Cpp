/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:58:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/21 15:48:47 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	challengeNewcomer(void) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		int	_hitPoints;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_level;
		std::string	_name; //in constructor
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_armorDamageReduction;
};

#endif