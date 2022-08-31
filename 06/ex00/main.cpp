/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:24:25 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/31 20:36:49 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
	Convert c;

	if (ac != 2)
	{
		std::cout << "argument count is not 2" << std::endl;
		return (1);
	}	
	c.setValue(av[1]);
	std::cout << c << std::endl;
	return (0);
}
