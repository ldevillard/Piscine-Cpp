/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:25:26 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 17:08:48 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice(std::string const & type = "ice");
		Ice(const Ice & copy);
		Ice &operator=(const Ice & copy);
		virtual ~Ice();

		std::string const & getType() const {return _type;} //Returns the materia type
		unsigned int getXP() const {return _xp;} //Returns the Materia's XP
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif