/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:04:01 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 12:49:27 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i = 0; i < ac - 1; i++)
		{
			for (j = 0; av[i + 1][j]; j++)
				av[i + 1][j] = (char)toupper(av[i + 1][j]);
			std::cout << av[i + 1];
		}
	}
	std::cout << std::endl;
	return (0);
}