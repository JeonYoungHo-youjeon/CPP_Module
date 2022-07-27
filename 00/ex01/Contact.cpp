/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:36 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 22:56:08 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::AddContact(void)
{
	std::cout << "His(her) first name is..." << std::endl;
	std::cin >> this->f_name;
	std::cout << "His(her) last name is..." << std::endl;
	std::cin >> this->l_name;
	std::cout << "His(her) nickname is..." << std::endl;
	std::cin >> this->n_name;
	std::cout << "His(her) phone number is..." << std::endl;
	std::cin >> this->p_number;
	std::cout << "His(her) darkest secret is..." << std::endl;
	std::cin >> this->secret;
	std::cout << "Save his(her) Contact." << std::endl;
}

std::string Contact::getShortStr(std::string str)
{
	if (static_cast<int>(str.size()) > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - static_cast<int>(str.size()), ' ') + str);
}

void	Contact::PrintShortContact(void)
{
	std::cout	<< "|" << getShortStr(this->f_name) \
				<< "|" << getShortStr(this->l_name) \
				<< "|" << getShortStr(this->n_name) \
				<< "|" << std::endl;
}

void	Contact::PrintAllContact(void)
{
	std::cout << "first name : " << this->f_name << std::endl;
	std::cout << "last name : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->n_name << std::endl;
	std::cout << "phone number : " << this->p_number << std::endl;
	std::cout << "darkest secret : " << this->secret << std::endl;
}
