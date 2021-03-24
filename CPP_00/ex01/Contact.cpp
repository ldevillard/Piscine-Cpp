/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:33:16 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 15:53:21 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::init_firstname(std::string str)
{
	m_firstname = str;
}

void	Contact::init_lastname(std::string str)
{
	m_lastname = str;
}

void	Contact::init_nickname(std::string str)
{
	m_nickname = str;
}

void	Contact::init_login(std::string str)
{
	m_login = str;
}

void	Contact::init_postadress(std::string str)
{
	m_postadress = str;
}

void	Contact::init_mailadress(std::string str)
{
	m_mailadress = str;
}

void	Contact::init_phone(std::string str)
{
	m_phone = str;
}

void	Contact::init_birth(std::string str)
{
	m_birth = str;
}

void	Contact::init_favmeal(std::string str)
{
	m_favmeal = str;
}

void	Contact::init_undercolor(std::string str)
{
	m_undercolor = str;
}

void	Contact::init_secret(std::string str)
{
	m_secret = str;
}

void	Contact::all_display(int index) const
{
	std::string str;

	std::cout << "\033[1;33m";

	std::cout << std::setw(10);
	std::cout << index << "|";
	
	if (m_firstname.size() > 10)
	{
		str = m_firstname.substr(0, 9);
		str.push_back('.');
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << m_firstname;
	}
	std::cout << "|";
	if (m_lastname.size() > 10)
	{
		str = m_lastname.substr(0, 9);
		str.push_back('.');
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << m_lastname;
	}
	std::cout << "|";
	if (m_login.size() > 10) 
	{
		str = m_login.substr(0, 9);
		str.push_back('.');
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << m_login;
	}
	std::cout << "|" << std::endl;
	std::cout << "\033[0m";
}

void	Contact::show_full_infos() const
{
	std::cout << "First Name : " << m_firstname << std::endl;
	std::cout << "Last Name : " << m_lastname << std::endl;
	std::cout << "Nick Name : " << m_nickname << std::endl;
	std::cout << "Login : " << m_login << std::endl;
	std::cout << "Postal Address : " << m_postadress << std::endl;
	std::cout << "Mail Address : " << m_mailadress << std::endl;
	std::cout << "Phone : " << m_phone << std::endl;
	std::cout << "Birth : " << m_birth << std::endl;
	std::cout << "Favorite Meal : " << m_favmeal << std::endl;
	std::cout << "Underwear Color : " << m_undercolor << std::endl;
	std::cout << "Dark Secret : " << m_secret << std::endl;
}