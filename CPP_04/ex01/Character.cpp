/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:00:56 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:32:58 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) :
	_name(name), _ap(40), _weapon(NULL)
{
}

Character::Character(const Character & copy)
{
	this->_name = copy.getName();
	this->_ap = copy.getAP();
	this->_weapon = copy.getWeapon();
}

Character	&Character::operator=(const Character & copy)
{
	this->_name = copy.getName();
	this->_ap = copy.getAP();
	this->_weapon = copy.getWeapon();
	return *this;
}

Character::~Character()
{
}

std::ostream	&operator<<(std::ostream &out, const Character &src)
{
	if (src.getWeapon() != NULL)
		out << src.getName() + " has " << src.getAP() << " AP and wields a " + src.getWeapon()->getName() << std::endl;
	else
		out << src.getName() + " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::recoverAP()
{
	if (_ap + 10 < 40)
		_ap += 10;
	else
		_ap = 40;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon == NULL)
		return ;
	if (_ap - _weapon->getAPCost() >= 0)
		_ap -= _weapon->getAPCost();
	else
		return ;

	std::cout << _name + " attacks " + enemy->getType() + " with a " + _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}