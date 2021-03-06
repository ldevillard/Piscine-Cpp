/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:39:21 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 10:00:25 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	my_pony;
	my_pony.pony_init("Magloire", "Black", 102, 50);
	my_pony.pony_display_info();
	my_pony.pony_jump();
}

void	 ponyOnTheHeap(void)
{
	Pony	*my_pony;

	my_pony = new Pony;
	my_pony->pony_init("VincentMagdoom", "Noir", 52, 12);
	my_pony->pony_display_info();
	my_pony->pony_jump();
	delete my_pony;
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}