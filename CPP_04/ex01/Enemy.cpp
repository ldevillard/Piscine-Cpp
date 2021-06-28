/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:40:05 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:28:44 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) :
	_hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
}

Enemy	&Enemy::operator=(const Enemy & copy)
{
	this->_hp = copy.getHP();
	this->_type = copy.getType();
	return *this;
}

Enemy::~Enemy()
{
}

void Enemy::takeDamage(int damage)
{
	if (_hp - damage > 0)
		_hp -= damage;
	else
		_hp = 0;
}