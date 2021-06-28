/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:36:06 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 17:17:55 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria(type)
{
}

Cure::Cure(const Cure & copy) : AMateria(copy)
{
}

Cure &Cure::operator=(const Cure & copy)
{
	_xp = copy.getXP();
	return *this;
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	Cure *ret = new Cure(*this);
	return ret;
}

void	Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
