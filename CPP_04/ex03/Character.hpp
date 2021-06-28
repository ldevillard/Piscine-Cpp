/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:39:00 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 15:02:45 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria **_inventory;
	public:
		Character(std::string const & name = "Unknown");
		Character(const Character & copy);
		Character	&operator=(const Character & copy);
		virtual ~Character();
		
		AMateria *getMateria(int i) const { return _inventory[i];}
		virtual std::string const & getName() const {return _name;}
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif