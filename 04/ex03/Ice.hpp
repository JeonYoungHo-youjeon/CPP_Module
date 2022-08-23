/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:57:36 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:06:14 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
 public:
	Ice(void);
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	~Ice(void);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
