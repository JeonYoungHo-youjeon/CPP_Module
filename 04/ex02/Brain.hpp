/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:48:47 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/22 21:38:35 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain {
 private:
	std::string ideas[100];
 public:
	Brain(void);
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	~Brain(void);
	std::string getIdeas(int n) const;
	void setIdeas(std::string idea, int n);
};

#endif
