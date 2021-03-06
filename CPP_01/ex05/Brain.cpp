/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:46:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/08 09:22:02 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain()
{
	mIq = 180;
	mSize = 10;
	mAge = 21;
	mHumor = "Good";
	mWisdom = "Awesome";
}

std::string	Brain::identify() const
{
	Brain	*ptr;
	std::string	ret;
	int	i;

	ptr = (Brain *)this;

	std::ostringstream get_the_address; 
	get_the_address << ptr;
	ret = get_the_address.str(); 

	for (i = 2; ret[i]; i++)
			ret[i] = toupper(ret[i]);

	return (ret);
}