/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:52:09 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 10:13:45 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void				rangedAttack(std::string const &target) const;
		void				meleeAttack(std::string const &target) const;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string	&get_name() const;
	
	protected:
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