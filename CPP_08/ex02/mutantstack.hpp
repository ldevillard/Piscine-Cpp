/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:04:23 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 17:45:23 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream> 
#include <stack>
#include <iterator>
#include <list>

/*
5
2 -> 5 2 1 -> 1 2 5
1
*/
template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		MutantStack(MutantStack &copy) : std::stack<T>(copy)
		{
		}
		MutantStack &operator=(MutantStack &copy)
		{
			std::stack<T>::operator=(copy);
			return *this;
		}
		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return std::begin(std::stack<T>::c);
		}

		iterator end()
		{
			return std::end(std::stack<T>::c);
		}
};

#endif