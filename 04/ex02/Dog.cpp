/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:53:04 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 22:57:11 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Class Constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
	this->type = obj.type;
	this->brain = new Brain();
	*(this->brain) = *(obj.brain);
	std::cout << "Dog Class copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) 
{
	this->type = obj.type;
	*(this->brain) = *(obj.brain);
	std::cout << "Dog Class operator= called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	this->brain = NULL;
	std::cout << "Dog Class Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog say 'Bark Bark!'" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}
