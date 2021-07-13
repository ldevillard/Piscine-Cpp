/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:36:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 16:08:55 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

class CantFind : public std::exception
{
	const char * what () const throw ()
	{
		return "can't find argument in container.";
	}
};

template<typename T>
int	&easyfind(T &container, int i)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw CantFind();
	return *it;
}

#endif