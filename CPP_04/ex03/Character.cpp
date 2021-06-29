/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:48:31 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 09:01:22 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character & copy) : _name(copy.getName())
{
	int i = 0;
	_inventory = new AMateria*[4];
	while (i < 4)
	{
		_inventory[i] = copy.getMateria(i);
		i++;
	}
}

Character	&Character::operator=(const Character & copy)
{
	int i = 0;
	_name = copy.getName();

	while (i < 4)
	{
		delete _inventory[i];
		_inventory[i] = copy.getMateria(i);
		i++;
	}
	return *this;
}

Character::~Character()
{
	/*std::cout << _name << std::endl;
	std::cout << _inventory[0] << std::endl;
	std::cout << _inventory[1] << std::endl;
	std::cout << _inventory[2] << std::endl;
	std::cout << _inventory[3] << std::endl;*/

	delete [] _inventory;
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	if (_inventory[0] && _inventory[1] && _inventory[2] && _inventory[3])
		return ;
	while (_inventory[i])
		i++;
	_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}