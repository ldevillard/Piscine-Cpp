/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:11:48 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/07 16:34:34 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		int	_size;
		T *	_array;
	public:
		Array() : _size(0), _array(NULL) {}
		Array(unsigned int n)
		{
			_array = new T[n];
			_size = n;
		}
		Array(const Array &copy)
		{
			_size = copy.size();
			_array = new T[copy.size()];
			for (int i = 0; i < copy.size(); i++)
				_array[i] = copy[i];
		}

		Array	&operator=(const Array &copy)
		{
			if (_size > 0)
				delete [] _array;
			_size = copy.size();
			_array = new T[_size];
			for (int i = 0; i < copy.size(); i++)
				_array[i] = copy[i];
			return *this;
		}

		T	&operator[](int idx) const
		{
			if (idx < 0 || idx > _size - 1)
				throw OutOfRange();
			return _array[idx];
		}

		~Array()
		{
			if (_size > 0)
				delete [] _array;
		}

		
		int	size() const {return _size;}

	class OutOfRange : public std::exception
	{
		const char * what () const throw ()
		{
			return "\e[0;31mError : out of range!\e[0m";
		}
	};
};

#endif