/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:26:41 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 22:17:36 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) 
{
	this->type = "";
}

AMateria::AMateria(const AMateria& obj) 
{
	this->type = obj.getType();
}

AMateria& AMateria::operator=(const AMateria& obj) 
{
	this->type = obj.getType();
	return *this;
}

AMateria::~AMateria(void) 
{
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "something wrong. you called AMateria's function." << std::endl;
	(void)target;
}
