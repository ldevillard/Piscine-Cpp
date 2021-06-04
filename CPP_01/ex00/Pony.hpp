/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:29:49 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/04 10:41:04 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public :
	void	pony_init(std::string name, std::string color, int heigt, int age);
	void	pony_display_info() const;

	private :
	std::string	p_name;
	std::string	p_color;
	int			p_heigt;
	int			p_age;
};

#endif