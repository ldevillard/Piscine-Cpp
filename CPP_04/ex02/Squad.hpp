/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:27:15 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 12:35:26 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

typedef struct	s_list
{
	ISpaceMarine	*content;
	struct s_list	*next;
}				t_list;

class Squad : public ISquad
{
	private:
		t_list *_army;
		int	_count;

	public:
		Squad();
		Squad(const Squad & copy);
		Squad &operator=(const Squad & copy);
		virtual ~Squad();

		t_list	*getArmy() const {return _army;}

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int i) const;
		virtual int push(ISpaceMarine*);
};

#endif