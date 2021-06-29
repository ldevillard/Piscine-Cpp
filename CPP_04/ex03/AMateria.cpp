/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:09:12 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 08:52:39 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria & copy) : _type(copy.getType()), _xp(copy.getXP())
{
}

AMateria &AMateria::operator=(const AMateria & copy)
{
	_xp = copy.getXP();
	return *this;
}

AMateria::~AMateria()
{
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}