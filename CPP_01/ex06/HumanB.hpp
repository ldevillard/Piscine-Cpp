/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:50:07 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 11:13:49 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);

	private:
	std::string	mName;
	Weapon		*mWeapon;
};

#endif