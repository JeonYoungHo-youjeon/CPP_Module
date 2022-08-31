/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:21:48 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 02:49:19 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base* generate(void)
{
	int tmp = (rand() % 3);
	Base* ret = NULL;

	if (tmp == 0) 
		ret = new A();
	else if (tmp == 1)
		ret = new B();
	else
		ret = new C();

	return (ret);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "pointer is A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "pointer is B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "pointer is C\n";
}

void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A *>(&p))
			std::cout << "reference is A\n";
		else if (dynamic_cast<B *>(&p))
			std::cout << "reference is B\n";
		else if (dynamic_cast<C *>(&p))
			std::cout << "reference is C\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
