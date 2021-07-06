/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:40:53 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 14:28:55 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define BLUE "\e[1;34m"
# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define RED "\e[1;31m"
# define RESET "\e[0m"

typedef struct	Data
{
	std::string name;
	int age;
	char gender;
}				Data;

Data	*init_data(Data *ptr)
{
	ptr->name = "Marvin";
	ptr->age = 42;
	ptr->gender = 'M';
	return ptr;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *person = init_data(new Data);
	uintptr_t saver;

	std::cout << BLUE << "Data" << RESET << std::endl;
	std::cout << person->name + ", " << person->age << ", " << person->gender << std::endl;

	saver = serialize(person);
	
	std::cout << std::endl << YELLOW << "Serialized Data" << RESET << std::endl;
	std::cout << saver << std::endl;

	Data *restoredPerson = deserialize(saver);

	std::cout << std::endl << GREEN << "Data restored" << RESET << std::endl;
	std::cout << restoredPerson->name + ", " << restoredPerson->age << ", " << restoredPerson->gender << std::endl;

	std::cout << std::endl << RED << "Addresses" << RESET << std::endl;
	std::cout << person << std::endl;
	std::cout << restoredPerson << std::endl;
	
	delete person;
	return 0;
}