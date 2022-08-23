/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:08:36 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:09:44 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
 public:
	Cure(void);
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);
	~Cure(void);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
