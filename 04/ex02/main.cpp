/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:04:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/24 16:26:27 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal *d = new Dog();
	Animal *d2 = new Dog();
	std::string str;
	Animal *meta[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			meta[i] = new Dog();
		}
		else
		{
			meta[i] = new Cat();
		}
	}
	std::cout << std::endl;
	
	for (size_t i = 0; i < 10; i++)
	{
		delete meta[i];
	}
	

	std::cout << std::endl;
	d->makeSound();
	d2->makeSound();

	std::cout << std::endl;
	delete d;
	d = NULL;
	delete d2;
	d2 = NULL;

	return 0;
}