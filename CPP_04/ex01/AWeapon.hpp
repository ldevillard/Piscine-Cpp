/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:00:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:27:41 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	protected:
		std::string	_name;
		int			_damage;
		int			_apcost;

	public:
		AWeapon(std::string const & name = "Unknown", int damage = 0, int apcost = 0);
		AWeapon(const AWeapon &copy);
		AWeapon	&operator=(const AWeapon &copy);
		virtual ~AWeapon();

		std::string getName() const {return _name;}
		int getAPCost() const {return _apcost;}
		int getDamage() const {return _damage;}
		virtual void attack() const = 0;
};

#endif