/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:23:38 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 23:35:55 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): name(ClapTrap::name)
{
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj), name(obj.name)
{
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "DiamondTrap operator = " << name << " called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->AttackDamage = 30;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout	<< "This DiamondTrap name is " << this->name 
				<< " and This ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::printStatus(void)
{
	std::cout	<< "This DiamondTrap name is " << this->name << "\n"
				<< "HitPoint is " << HitPoint << "\n"
				<< "EnergyPoint is " << EnergyPoint << "\n"
				<< "AttackDamage is " << AttackDamage << std::endl;
}
