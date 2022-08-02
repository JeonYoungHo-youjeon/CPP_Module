/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:52:59 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/02 21:54:11 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "argc error" << std::endl;
		return (1);
	}
	
	Harl h;

	h.complain(av[1]);
	return (0);
}
