/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:51:30 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 11:08:04 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
	void	setZombieType(int type);
	Zombie	*newZombie(std::string name);
	void	randomChump() const;

	private:
	int	mType;
};

#endif