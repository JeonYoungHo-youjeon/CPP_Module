/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:29:54 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 22:25:03 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
	this->name = "";
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string name)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character& obj)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
		AMateria* tmp = obj.getInventory(i); 
		if (tmp != NULL)
		{
			this->inventory[i] = tmp->clone();
		}
	}
	this->name = obj.getName();
}

Character& Character::operator=(const Character& obj)
{
	this->name = obj.getName();
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
		AMateria* tmp = obj.getInventory(i); 
		if (tmp != NULL)
		{
			this->inventory[i] = tmp->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory[i];
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL && m != NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
}

AMateria* Character::getInventory(int idx) const
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
	{
		return (this->inventory[idx]);
	}
	else
	{
		return (NULL);
	}
}
