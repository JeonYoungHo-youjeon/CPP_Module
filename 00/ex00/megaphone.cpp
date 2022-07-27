/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:40 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 21:14:41 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				std::cout << static_cast<char>(std::toupper(av[i][j]));	
			}
		}
	}
	std::cout << std::endl;
	return (0);
}