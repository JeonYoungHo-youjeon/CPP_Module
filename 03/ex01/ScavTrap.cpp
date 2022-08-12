/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:00:16 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 21:13:24 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "ScavTrap operator = " << name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->HitPoint || !this->EnergyPoint)
	{
		std::cout << "ScavTrap " << this->name << " can not move..." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " has entered gate guard mode" << std::endl;
		this->EnergyPoint--;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->HitPoint || !this->EnergyPoint)
	{
		std::cout << "ScavTrap " << this->name << " can not move..." << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->name << " attacks " << target 
					<< ", causing " << this->AttackDamage << " points of damage!"
					<< std::endl;
		this->EnergyPoint--;
	}
}
