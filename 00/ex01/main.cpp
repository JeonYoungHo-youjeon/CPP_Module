/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:30 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 21:37:32 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	book;

	while (true)
	{
		std::cout << "please enter your command : (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.AddContact();
		}
		else if (cmd == "SEARCH")
		{
			book.PrintContact();
		}
		else if (cmd == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "sorry, command not found" << std::endl;
		}
	}
	return (0);
}
