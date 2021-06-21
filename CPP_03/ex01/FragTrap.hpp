/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:52:47 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/21 14:24:05 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class FragTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
		void	vaulthunter_dot_exe(std::string const &target);
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