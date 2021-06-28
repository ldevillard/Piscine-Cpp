/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:27:44 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 17:23:54 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::Ice(const Ice & copy) : AMateria(copy)
{
}

Ice &Ice::operator=(const Ice & copy)
{
	_xp = copy.getXP();
	return *this;
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	Ice *ret = new Ice(*this);
	return ret;
}

void	Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
