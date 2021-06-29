/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:18:47 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/29 09:10:09 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_toLearn = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_toLearn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
	_toLearn = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_toLearn[i] = copy.getLearn(i);
}

MateriaSource &MateriaSource::operator=(const MateriaSource & copy)
{
	for (int i = 0; i < 4; i++)
		_toLearn[i] = copy.getLearn(i);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; _toLearn[i]; i++)
		delete _toLearn[i];
	delete [] _toLearn;
}

void	MateriaSource::learnMateria(AMateria *src)
{
	int i = 0;
	AMateria *buf;

	if (_toLearn[0] && _toLearn[1] && _toLearn[2] && _toLearn[3])
	{
		std::cout << "* full filled *" << std::endl;
		delete src;
		return ;
	}
	while (_toLearn[i] != NULL)
		i++;
	if (src->getType() == "ice")
	{
		buf = new Ice("ice");
		this->_toLearn[i] = buf;
	}
	else if (src->getType() == "cure")
	{
		buf = new Cure("cure");
		this->_toLearn[i] = buf;
	}
	delete src;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4)
	{
		if (_toLearn[i] && _toLearn[i]->getType() == type)
			return _toLearn[i];
		i++;
	}
	return (0);
}