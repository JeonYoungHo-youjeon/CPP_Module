/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:04:05 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/24 15:06:56 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();

	std::cout << std::endl;
	delete meta;
	meta = NULL;
	delete j;
	j = NULL;
	delete i;
	i = NULL;
	delete wrong;
	wrong = NULL;
	return 0;
}