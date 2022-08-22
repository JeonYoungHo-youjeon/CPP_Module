/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:51:52 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 20:20:36 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
 public:
	WrongCat(void);
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& obj);
	~WrongCat(void);
	void makeSound(void) const;
};

#endif
