/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:40:48 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 21:59:55 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(i, 10, print<int>);
	std::cout << std::endl;

	iter(c, 5, print<char>);
	std::cout << std::endl;

	::iter(i, 10, printSqrt);
	std::cout << std::endl;

	return (0);
}