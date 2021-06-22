/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:01:15 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/22 10:16:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap();

		void	ninjaShoebox(ClapTrap &ref);
		void	ninjaShoebox(FragTrap &ref);
		void	ninjaShoebox(ScavTrap &ref);
		void	ninjaShoebox(NinjaTrap &ref);
};

#endif