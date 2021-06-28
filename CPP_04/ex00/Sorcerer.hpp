/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:16:13 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:11:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
	public:
		Sorcerer(const std::string name = "Unknown", const std::string title = "Unknown");
		Sorcerer(const Sorcerer &copy);
		~Sorcerer();
		Sorcerer	&operator=(const Sorcerer &copy);

		std::string	introduce() const;
		void polymorph(Victim const &src) const;

		std::string	getName() const {return _name;}
		std::string	getTitle() const {return _title;}

	private:
		std::string _name;
		std::string _title;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &src);

#endif 