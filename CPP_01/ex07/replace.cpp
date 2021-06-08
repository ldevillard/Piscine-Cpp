/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:56:13 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 14:21:46 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	merger(std::ifstream &read_file, std::ofstream &write_file, char *s1, char *s2)
{
	std::string str1 = s1, str2 = s2, line;
	int	i;

	while (std::getline(read_file, line))
	{
		i = line.find(str1);
		while (i != (int)std::string::npos)
		{
			line.replace(i, str1.size(), str2);
			i = line.find(str1, i + str2.size());
		}
		write_file << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::string	file;
	

	if (ac < 4)
	{
		std::cout << "Error argument." << std::endl;
		return (1);
	}
	file = av[1];
	std::ifstream read_file(file);
	std::ofstream write_file(file + ".replace");
	if (!read_file || !write_file)
	{
		read_file.close();
		write_file.close();
		std::cout << "Error while opening files." << std::endl;
		return (2);
	}
	merger(read_file, write_file, av[2], av[3]);
	read_file.close();
	write_file.close();
	return (0);
}