/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:53:04 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:20:57 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) 
{
	this->type = "WrongCat";
	std::cout << "WrongCat Class Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) 
{
	this->type = obj.type;
	std::cout << "WrongCat Class copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) 
{
	this->type = obj.type;
	std::cout << "WrongCat Class operator= called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Class Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat say 'meow...'" << std::endl;
}
