/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:14:21 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 17:19:53 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria **_toLearn;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		MateriaSource &operator=(const MateriaSource & copy);
		~MateriaSource();

		AMateria *getLearn(int i) const {return _toLearn[i];}

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif