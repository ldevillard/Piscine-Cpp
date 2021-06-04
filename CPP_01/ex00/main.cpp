/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:39:21 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/04 10:53:15 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main()
{
	Pony	my_pony;
	my_pony.pony_init("Jeanmi", "RED", 158, 21);
	my_pony.pony_display_info();
}