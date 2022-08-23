/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:59:44 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 22:23:48 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
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
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
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
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL && inventory[i]->getType() == type)
		{
			return (inventory[i]->clone());
		}
	}
	return (NULL);
}

AMateria* MateriaSource::getInventory(int idx) const
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
