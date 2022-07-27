/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:18 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 22:44:17 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::AddContact(void)
{
	this->contacts[index % 8].AddContect();
	this->index++;
}

void	PhoneBook::PrintContact(void)
{
	int i;
	int number;

	i = 0;
	if (this->index == 0)
		std::cout << "Your PhoneBook is empty." << std::endl;
	else
	{
		std::cout 	<< "     index" << "|" \
					<< "first name" << "|" \
					<< " last name" << "|" \
					<< "  nickname" << "|" << std::endl;
		while (i < this->index && i < 8)
		{
			std::cout << "         " << i + 1;
			this->contacts[i].PrintShortContect();
			i++;
		}
		std::cout << "Please enter the number you want" << std::endl;
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "Wrong input" << std::endl;
			return ;
		}
		number = number - 1;
		if (number <= 7 && number >= 0 && number < this->index)
			contacts[number].PrintAllContect();
		else
			std::cout << "Out of range" << std::endl;
	}
}
