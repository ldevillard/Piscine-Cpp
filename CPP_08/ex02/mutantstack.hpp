/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:04:23 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 11:31:41 by ldevilla         ###   ########lyon.fr   */
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
		MutantStack(MutantStack &copy)
		{
			std::list<T> buf;

			while(copy.size())
			{
				buf.push_back(copy.top());
				copy.pop();
			}
			typename std::list<T>::iterator it = buf.end();
			it--;
			while (it != buf.begin())
			{
				this->push(*it);
				copy.push(*it);
				it--;
			}
			this->push(*it);
			copy.push(*it);
			buf.clear();
		}
		MutantStack &operator=(MutantStack &copy)
		{
			std::list<T> buf;

			while (!this->empty())
				this->pop();
			while(copy.size())
			{
				buf.push_back(copy.top());
				copy.pop();
			}
			typename std::list<T>::iterator it = buf.end();
			it--;
			while (it != buf.begin())
			{
				this->push(*it);
				copy.push(*it);
				it--;
			}
			this->push(*it);
			copy.push(*it);
			buf.clear();
			return *this;
		}
		~MutantStack(){}

		typedef T *iterator;

		MutantStack<T>::iterator begin()
		{
			MutantStack<T>::iterator it = &this->top();
			for (int i = 0; i < (int)this->size(); i++)
				it--;
			return it + 1;
		}

		MutantStack<T>::iterator end()
		{
			MutantStack<T>::iterator it = &this->top();
			return it + 1;
		}
};

#endif