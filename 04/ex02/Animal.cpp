/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:42:10 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/24 16:24:42 by youjeon          ###   ########.fr       */
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

std::string Animal::getType(void) const
{
	return (type);
}
