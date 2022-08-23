/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:02:29 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:09:57 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) 
{
	this->type = "ice";
}

Ice::Ice(const Ice& obj) 
{
	this->type = obj.getType();
}

Ice& Ice::operator=(const Ice& obj) 
{
	this->type = obj.getType();
	return (*this);
}

Ice::~Ice(void) 
{
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
