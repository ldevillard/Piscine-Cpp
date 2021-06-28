/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:23:44 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 10:41:33 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	
	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete pr;
	delete me;

	std::cout << "--------------------------------------" << std::endl;

	Character* bobby = new Character("bobby");

	std::cout << *bobby;

	Enemy* titan = new SuperMutant();

	AWeapon* arm = pf;

	me->equip(arm);
	std::cout << *bobby;
	while (titan->getHP() > 0)
		bobby->attack(titan);
	std::cout << *bobby;

	delete bobby;
	delete arm;
	return 0;
}