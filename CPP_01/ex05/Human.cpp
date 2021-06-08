/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:24:07 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 10:04:11 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Human::identify() const
{
	return (this->mind.identify());
}

const Brain	&Human::getBrain() const
{
	return (this->mind);
}