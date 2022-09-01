/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:22:51 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 21:54:44 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	this->setSigned(obj.getSigned());
	this->setName(obj.getName());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
}

void RobotomyRequestForm::execute(const Bureaucrat& b) const
{
	checkExec(b);
	srand(time(NULL));
	int tmp = (rand() % 2); 

	std::cout << "drill say : drrrrrrrrrrrr...!" << std::endl;

	if (tmp)
	{
		std::cout << "wow! " << this->getName() << " succeeded in becoming a robot" << std::endl;
	}
	else
	{
		std::cout << "sorry... " << this->getName() << " failed to becoming a robot" << std::endl;
	}
}

Form* RobotomyRequestForm::clone(std::string name) const
{
	return (new RobotomyRequestForm(name));
}