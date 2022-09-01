/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:26:29 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 17:37:47 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		std::cout << "argument count is not 2" << std::endl;
		return (1);
	}	
	std::string a = av[1];
	std::string b = av[2];

	std::cout << "now. a : " << a << ", b : " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	swap(a, b);
	std::cout << "do swap. a : " << a << ", b : " << b << std::endl;
	return (0);
}