/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:42:00 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 14:43:32 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base
{
	public:
		A();
		A(const A &copy);
		A	&operator=(const A &copy);
		virtual ~A();
};

#endif