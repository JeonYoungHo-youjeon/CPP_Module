/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:26:44 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:04:32 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria {
 protected:
	std::string type;
 public:
	AMateria(void);
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& obj);
	virtual ~AMateria(void);
	AMateria(std::string const & type);
	std::string const & getType() const; 
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
