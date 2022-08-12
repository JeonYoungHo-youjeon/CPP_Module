/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:12:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/12 21:24:12 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");

	std::cout << std::endl;

	a.attack("B");
	b.takeDamage(5);
	b.beRepaired(5);
	std::cout << std::endl;

	b.attack("A");
	a.takeDamage(10);
	a.beRepaired(10);
	std::cout << std::endl;

	return (0);
}
