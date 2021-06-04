/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:39:21 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/04 11:23:55 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main()
{
	Pony	my_pony;
	Pony	my_pony2;
	my_pony.pony_init("Magloire", "Black", 102, 50);
	my_pony2.pony_init("VincentMagdoom", "Noir", 52, 12);
	my_pony.pony_display_info();
	my_pony.pony_jump();
	my_pony2.pony_display_info();
	my_pony2.pony_jump();
}