/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:47:03 by ldevilla          #+#    #+#             */
/*   Updated: 2021/07/06 15:25:08 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>

Base	*generate(void)
{
	int	i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Creating A" << std::endl;
		return new A;
	}
	else if (i == 1)
	{
		std::cout << "Creating B" << std::endl;
		return new B;
	}
	else if (i == 2)
	{
		std::cout << "Creating C" << std::endl;
		return new C;
	}
	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << dynamic_cast<A*>(p) << " - Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << dynamic_cast<B*>(p) << " - Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << dynamic_cast<C*>(p) << " - Type C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base &buf = dynamic_cast<A&>(p);
		std::cout << &buf << " - Type A" << std::endl;
	}
	catch (std::exception &e)
	{
		//std::cerr << e.what() << std::endl;
	}

	try
	{
		Base &buf = dynamic_cast<B&>(p);
		std::cout << &buf << " - Type B" << std::endl;
	}
	catch (std::exception &e)
	{
		//std::cerr << e.what() << std::endl;
	}

	try
	{
		Base &buf = dynamic_cast<C&>(p);
		std::cout << &buf << " - Type C" << std::endl;
	}
	catch (std::exception &e)
	{
		//std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	srand(time(0));

	Base *randomBase = generate();
	identify(randomBase);
	identify(*randomBase);

	delete randomBase;
	return 0;
}