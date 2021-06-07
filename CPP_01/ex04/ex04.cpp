/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:58:00 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 15:38:56 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	display;
	std::string	*ptr;
	std::string	&ref = display;

	display = "HI THIS IS BRAIN";
	ptr = &display;

	std::cout << "ptr : " + *ptr << std::endl;
	std::cout << "ref : " + ref << std::endl;

	return (0);
}