/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:56:06 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:07:46 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int	_ap;
		AWeapon	*_weapon;
	
	public:
		Character(std::string const & name = "Unknown");
		Character(const Character & copy);
		Character	&operator=(const Character & copy);
		~Character();

		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);

		std::string getName() const {return _name;}
		int	getAP() const {return _ap;}
		AWeapon	*getWeapon() const {return _weapon;}
};

std::ostream	&operator<<(std::ostream &out, const Character &);

#endif