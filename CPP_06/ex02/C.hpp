/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:45:57 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 14:46:15 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C: public Base
{
	public:
		C();
		C(const C &copy);
		C	&operator=(const C &copy);
		virtual ~C();
};

#endif