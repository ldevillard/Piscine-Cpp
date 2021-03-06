/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:32:13 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:11:39 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	public:
		Victim(const std::string name = "Unknown");
		Victim(const Victim &copy);
		virtual ~Victim();
		Victim	&operator=(const Victim &copy);

		std::string	introduce() const;
		virtual void	getPolymorphed() const;

		std::string	getName() const {return _name;}

	protected:
		std::string _name;
};

std::ostream	&operator<<(std::ostream &out, const Victim &src);

#endif 