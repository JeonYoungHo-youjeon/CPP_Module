/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 23:37:53 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("A");

	std::cout << std::endl;
	
	a.attack("A");
	a.takeDamage(a.getDamege());
	a.beRepaired(10);
	std::cout << std::endl;

	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	std::cout << std::endl;
	a.printStatus();

	std::cout << std::endl;

	return (0);
}
