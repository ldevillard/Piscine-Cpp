/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:45:24 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 15:16:27 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
}

B::B(const B &copy)
{
	*this = copy;
}

B	&B::operator=(const B &copy)
{
	(void)copy;
	return *this;
}

B::~B()
{
}