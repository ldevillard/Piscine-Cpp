/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:02:01 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 15:48:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type = "Unknown");
		AMateria(const AMateria & copy);
		AMateria &operator=(const AMateria & copy);
		virtual ~AMateria();
		std::string const & getType() const {return _type;} //Returns the materia type
		unsigned int getXP() const {return _xp;} //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif