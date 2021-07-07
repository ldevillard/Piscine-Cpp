/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:37:59 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/07 15:10:38 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *tab, unsigned int lenght, void f(T *elem))
{
	unsigned int i = 0;
	while (i < lenght)
		f(&tab[i++]);
}

template<typename T>
void	increment(T *ptr)
{
	*ptr += 1.1;
}

#endif