/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:07:55 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 15:50:30 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	ft_add_contact(int &nbr_contact, Contact &contact_set)
{
	std::string str;

	std::cout << "First Name : ";
	std::cin >> str;
	contact_set.init_firstname(str);

	std::cout << "Last Name : ";
	std::cin >> str;
	contact_set.init_lastname(str);

	std::cout << "Nick Name : ";
	std::cin >> str;
	contact_set.init_nickname(str);

	std::cout << "Login : ";
	std::cin >> str;
	contact_set.init_login(str);

	std::cout << "Postal Address : ";
	std::cin >> str;
	contact_set.init_postadress(str);

	std::cout << "Mail Address : ";
	std::cin >> str;
	contact_set.init_mailadress(str);

	std::cout << "Phone : ";
	std::cin >> str;
	contact_set.init_phone(str);

	std::cout << "Birth : ";
	std::cin >> str;
	contact_set.init_birth(str);

	std::cout << "Favorite Meal : ";
	std::cin >> str;
	contact_set.init_favmeal(str);

	std::cout << "Underwear Color : ";
	std::cin >> str;
	contact_set.init_undercolor(str);

	std::cout << "Dark Secret : ";
	std::cin >> str;
	contact_set.init_secret(str);
	
	nbr_contact++;
}

void	ft_search_contact(int &nbr_contact, Contact contact_list[8])
{
	int	i;
	std::string buf;

	if (!nbr_contact)
		return ;
	for (i = 0; i < nbr_contact; i++)
		contact_list[i].all_display(i);
	std::cout << "Index : ";
	std::cin >> buf;
	if (buf.size() > 1 || !buf.size())
		i = -1;
	if (!isnumber(buf[0]))
		i = -1;
	if (i != -1)
		i = atoi(buf.c_str());
	if (i < 0 || i >= nbr_contact)
		std::cout << "Sorry but the index doesn't exist !" << std::endl;
	else
		contact_list[i].show_full_infos();
}

int	main()
{
	std::string command;
	int nbr_contact;
	Contact contact_list[8];

	nbr_contact = 0;
	while (1)
	{
		command = "";
		std::cin >> command;
		if (command == "ADD")
		{
			if (nbr_contact == 8)
				std::cout << "You're PhoneBook is fullfilled !" << std::endl;
			else
				ft_add_contact(nbr_contact, contact_list[nbr_contact]);
		}
		if (command == "SEARCH")
			ft_search_contact(nbr_contact, contact_list);
		if (command == "EXIT")
			break ;
	}
	return (0);
}