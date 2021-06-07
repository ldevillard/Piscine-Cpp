/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:31:23 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 14:36:58 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name, int type = 1);
	~Zombie();
	std::string	get_name();
	void	set_name(std::string name);
	void	announce() const;

	private:
	std::string	mName;
	int			mType;
};

#endif