/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:42:40 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/05 02:06:54 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	a(5, 5);
	Point	b(2, 9);
	Point	c(0, 5);
	Point	p(3, 7);

	if (bsp(a, b, c, p))
		std::cout << "p is in the triangle" << std::endl;
	else
		std::cout << "p is out of the triangle" << std::endl;
	return 0;
}
