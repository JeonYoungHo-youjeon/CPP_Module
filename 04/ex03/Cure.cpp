/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:08:49 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 22:22:21 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) 
{
	this->type = "cure";
}

Cure::Cure(const Cure& obj) 
{
	this->type = obj.getType();
}

Cure& Cure::operator=(const Cure& obj) 
{
	this->type = obj.getType();
	return (*this);
}

Cure::~Cure(void) 
{
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
