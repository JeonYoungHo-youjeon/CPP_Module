/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:16:37 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:22:53 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
 protected:
	std::string type;
 public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(const WrongAnimal& obj);
	~WrongAnimal(void);
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif


