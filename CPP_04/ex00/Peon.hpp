/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:45:25 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 19:56:31 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>

class Peon : public Victim
{
	public:
		Peon(const std::string name);
		Peon(const Peon &copy);
		virtual ~Peon();
		Peon	&operator=(const Peon &copy);

		void	getPolymorphed() const;
};

#endif 