/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:35:17 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/28 09:39:29 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
	protected:
		int _hp;
		std::string _type;

	public:
		Enemy(int hp = 0, std::string const & type = "Unknown");
		Enemy(const Enemy &copy);
		Enemy	&operator=(const Enemy &copy);
		virtual ~Enemy();
		
		std::string getType() const {return _type;}
		int	getHP() const {return _hp;}

		virtual void takeDamage(int damage);
};

#endif