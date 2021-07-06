/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:44:55 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 14:45:12 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(const B &copy);
		B	&operator=(const B &copy);
		virtual ~B();
};

#endif