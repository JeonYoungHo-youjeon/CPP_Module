/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 21:25:29 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("A");
	ScavTrap b("B");

	std::cout << std::endl;
	
	a.attack("B");
	b.takeDamage(a.getDamege());
	b.beRepaired(3);
	std::cout << std::endl;

	b.attack("A");
	a.takeDamage(b.getDamege());
	a.beRepaired(10);
	std::cout << std::endl;

	a.guardGate();
	std::cout << std::endl;

	return (0);
}
