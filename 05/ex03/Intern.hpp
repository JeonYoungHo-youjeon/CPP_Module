/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:10:16 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 21:45:08 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
 private:
	Form *f[3];
 public:
	Intern(void);
	Intern(const Intern& obj);
	Intern& operator=(const Intern& obj);
	~Intern(void);

	class NoTypeExcption : public std::exception
	{
		public:
			const char * what(void) const throw();
	};
	Form* makeForm(std::string type, std::string name);
};

#endif
