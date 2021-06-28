/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:33:33 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 17:08:54 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure(std::string const & type = "cure");
		Cure(const Cure & copy);
		Cure &operator=(const Cure & copy);
		virtual ~Cure();

		std::string const & getType() const {return _type;} //Returns the materia type
		unsigned int getXP() const {return _xp;} //Returns the Materia's XP
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif