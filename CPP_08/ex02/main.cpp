/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:25:23 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/13 11:34:57 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void	printStackInt(MutantStack<int> &ref)
{
	MutantStack<int>::iterator it = ref.begin();
	MutantStack<int>::iterator ite = ref.end();

	std::cout << "-" << std::endl;
	while (it != ite)
		std::cout << *it++ << std::endl;
}

int main()
{
	MutantStack<int> heap;

	heap.push(1);
	heap.push(2);
	heap.push(5);
	heap.push(65);

	MutantStack<int> lol(heap);
	lol.pop();
	lol.push(7);

	printStackInt(heap);
	printStackInt(lol);

	MutantStack<int> buf;
	buf.push(4323);
	buf = lol;
	buf.push(75);
	printStackInt(buf);
	std::cout << "size : " << buf.size() << std::endl;

	std::cout << "-------------------------" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}