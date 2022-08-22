/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:51:52 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:14:55 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
 public:
	Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	~Cat(void);
	void makeSound(void) const;
};

#endif
