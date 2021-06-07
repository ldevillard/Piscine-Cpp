/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:46:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/06/07 16:11:32 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(int qi, int size, int age, std::string humor, std::string wisdom)
{
	mIq = qi;
	mSize = size;
	mAge = age;
	mHumor = humor;
	mWisdom = wisdom;
}

std::string	Brain::identify() const
{
	Brain	*ptr;
	std::string	ret;

	ptr = (Brain *)this;

	std::ostringstream get_the_address; 
	get_the_address << ptr;
	ret = get_the_address.str(); 

	//std::cout << ptr << std::endl;
	std::cout << ret << std::endl;
	return ("Hey");
}