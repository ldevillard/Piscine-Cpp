/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:46:42 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 11:36:39 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Error.hpp"

int check_cast(std::string value)
{
	int i = 0;
	bool hasZero = false;
	
	if (value[0] == '+' || value[0] == '-')
		i++;
	while (value[i] == '0')
	{
		hasZero = true;
		i++;
	}
	if (!value[i] && hasZero == true)
		return (0);
	if (!hasZero || (value[i] != '.' && value[i] != 'f' && value[i] != '0'))
		return (1);
	if (value[i] == 'f' && value[i + 1])
		return (1);
	if (value[i] == '.' && value[i + 1] == 'f')
		return (1);
	i++;
	while(value[i])
	{
		if (value[i] == 'f' && value[i + 1])
			return (1);
		else if (value[i] != '0' && value[i] != 'f')
			return (1);
		i++;
	}
	return (0);
}

void	parser(const char *value)
{
	double cast;

	if (isprint(value[0]) && !isdigit(value[0]) && strlen(value) == 1)
		cast = (int)value[0];
	else
		cast = atof(value);

	if (cast == 0 && check_cast(value))
		throw ParsingException();

	//CAST CHAR
	if (cast < -128 || cast > 127 || isnan(cast))
		std::cout << "char : impossible" << std::endl;
	else if (isprint(static_cast<int>(cast)))
		std::cout << "char : \'" << static_cast<char>(cast) << "\'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	
	//CAST INT
	if (cast < -2147483648 || cast > 2147483647 || isnan(cast))
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(cast) << std::endl;

	//CAST FLOAT
	if (ceil(static_cast<float>(cast)) == static_cast<float>(cast))
		std::cout << "float : " << std::setprecision(1) << std::fixed << static_cast<float>(cast) << "f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(cast) << "f" << std::endl;

	//CAST DOUBLE
	if (ceil(cast) == cast)
		std::cout << "double : " << std::setprecision(1) << std::fixed << cast << std::endl;
	else
		std::cout << "double : " << cast << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			parser(av[1]);
		}
		catch(const ParsingException& e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}
	else
		std::cout << "Argument expected!" << std::endl;
}