/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:55:51 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 10:02:16 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
# define ERROR_HPP

#include <iostream>

struct ParsingException : public std::exception
{
	const char * what () const throw ()
	{
		return "\e[0;31mError : parsing!\e[0m";
	}
};

#endif