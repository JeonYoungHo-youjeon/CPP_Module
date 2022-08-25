/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:36:59 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 21:52:32 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	this->setSigned(obj.getSigned());
	this->setName(obj.getName());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

void PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	checkExec(b);
	
	std::cout << this->getName() << " was pardoned by President Zaphod Beeblebrox.." << std::endl;
}

Form* PresidentialPardonForm::clone(std::string name) const
{
	return (new PresidentialPardonForm(name));
}
