/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:39:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 20:15:04 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Bowman.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	
	Bowman elwin("Elwin");
	Bowman moogly("Moogly");
	Bowman elwin2(elwin);

	moogly = elwin;
	
	std::cout << robert << jim << joe << elwin << moogly << elwin2;

	robert.polymorph(jim);
	robert.polymorph(joe);

	robert.polymorph(elwin);
	robert.polymorph(moogly);
	robert.polymorph(elwin2);

	return 0;
}