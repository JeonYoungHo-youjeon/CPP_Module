/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:13:26 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/05 15:29:19 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	f[0] = new ShrubberyCreationForm("");
	f[1] = new RobotomyRequestForm("");
	f[2] = new PresidentialPardonForm("");
}

Intern::Intern(const Intern& obj)
{
	(void)obj;
}

Intern& Intern::operator=(const Intern& obj)
{
	if(this == &obj) return *this;
	(void)obj;
	return (*this);
}

Intern::~Intern(void)
{
	delete f[0];
	delete f[1];
	delete f[2];
}

Form* Intern::makeForm(std::string type, std::string name)
{
	std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (types[i] == type) 
		{
			return (f[i]->clone(name));
		}
	}
	throw Intern::NoTypeExcption();
	return (NULL);
}

const char * Intern::NoTypeExcption::what(void) const throw()
{
	return ("sorry, i can not found that form");
}
