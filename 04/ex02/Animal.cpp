/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:42:10 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:14:47 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) 
{
	this->type = "Animal";
	std::cout << "Animal Class Constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) 
{
	this->type = obj.type;
	std::cout << "Animal Class copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj) 
{
	this->type = obj.type;
	std::cout << "Animal Class operator= called" << std::endl;
	return (*this);
}

Animal::~Animal(void) 
{
	std::cout << "Animal Class Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal say nothing, this message is something wrong" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}
