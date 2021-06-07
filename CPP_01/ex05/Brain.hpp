/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:40:20 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 15:45:49 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
	Brain(int qi, int size, int age, std::string humor, std::string wisdom);
	std::string	identify() const;

	private:
	int	mIq;
	int	mSize;
	int	mAge;
	std::string	mHumor;
	std::string	mWisdom;
};

#endif