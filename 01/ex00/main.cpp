/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:40:07 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/01 18:14:33 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie stack("stack1");
	Zombie *heap = newZombie("heap");

	randomChump("stack2");
	stack.announce();
	heap->announce();
	delete heap;
	return (0);
}
