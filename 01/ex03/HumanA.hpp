/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:22:03 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/02 16:07:30 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
 private:
	std::string name;
	Weapon &weapon;
 public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void) const;
};

#endif

