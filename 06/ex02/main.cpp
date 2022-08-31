/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:19:28 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 02:50:13 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base * a;
	Base * b;

	srand(time(NULL));
	
	a = generate();
	b = generate();

	identify(a);
	identify(b);

	identify(*a);
	identify(*b);

	delete a;
	delete b;
	return (0);
}