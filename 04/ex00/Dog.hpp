/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:51:52 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:15:11 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
 public:
	Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	~Dog(void);
	void makeSound(void) const;
};

#endif
