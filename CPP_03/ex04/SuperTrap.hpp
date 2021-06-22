/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:24:44 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 11:22:18 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap();

		void	rangedAttack(std::string const &target) const;
		void	meleeAttack(std::string const &target) const;
};
#endif