/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:28:50 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 21:38:12 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
	this->name = "default";
	this->AttackDamage = 30;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "FragTrap operator = " << name << " called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;

}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->AttackDamage = 30;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!this->HitPoint) 
	{
		std::cout << "FragTrap " << this->name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " high five!\n";
	}
}
