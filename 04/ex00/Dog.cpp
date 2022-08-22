/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:53:04 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:15:05 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{
	this->type = "Dog";
	std::cout << "Dog Class Constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
	this->type = obj.type;
	std::cout << "Dog Class copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
	this->type = obj.type;
	std::cout << "Dog Class operator= called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Class Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog say 'Bark Bark!'" << std::endl;
}
