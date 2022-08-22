/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:17:50 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:19:42 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Class Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
	this->type = obj.type;
	std::cout << "WrongAnimal Class copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) 
{
	this->type = obj.type;
	std::cout << "WrongAnimal Class operator= called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "WrongAnimal Class Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal say nothing, this message is something wrong" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
	return (type);
}
