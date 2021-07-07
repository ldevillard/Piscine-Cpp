/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:19:00 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/07 14:25:32 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &arg1, T &arg2)
{
	T buf = arg1;
	arg1 = arg2;
	arg2 = buf;
}

template<typename T>
T	min(T &arg1, T &arg2)
{
	if (arg1 < arg2)
		return arg1;
	else
		return arg2;
}

template<typename T>
T	max(T &arg1, T &arg2)
{
	if (arg1 > arg2)
		return arg1;
	else
		return arg2;
}

#endif