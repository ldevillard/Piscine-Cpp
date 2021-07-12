/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:36:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/09 10:52:22 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

class CantFind : public std::exception
{
	const char * what () const throw ()
	{
		return "can't find argument in container.";
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		if (*it == i)
			return it;
		it++;
	}
	throw CantFind();
}

#endif