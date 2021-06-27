/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bowman.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:08:11 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/27 20:08:53 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOWMAN_HPP
# define BOWMAN_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>

class Bowman : public Victim
{
	public:
		Bowman(const std::string name);
		Bowman(const Bowman &copy);
		virtual ~Bowman();
		Bowman	&operator=(const Bowman &copy);

		void	getPolymorphed() const;
};

#endif 