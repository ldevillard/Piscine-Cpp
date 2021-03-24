/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:13:31 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 14:59:53 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public :
	void init_firstname(std::string str);
	void init_lastname(std::string str);
	void init_nickname(std::string str);
	void init_login(std::string str);
	void init_postadress(std::string str);
	void init_mailadress(std::string str);
	void init_phone(std::string str);
	void init_birth(std::string str);
	void init_favmeal(std::string str);
	void init_undercolor(std::string str);
	void init_secret(std::string str);

	void all_display(int index) const;
	void show_full_infos() const;

	private :
	std::string m_firstname;
	std::string m_lastname;
	std::string m_nickname;
	std::string m_login;
	std::string m_postadress;
	std::string m_mailadress;
	std::string m_phone;
	std::string m_birth;
	std::string m_favmeal;
	std::string m_undercolor;
	std::string m_secret;
};

#endif