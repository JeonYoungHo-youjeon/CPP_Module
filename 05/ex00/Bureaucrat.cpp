/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:55:18 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/05 14:43:54 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high...";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low...";
}

Bureaucrat::Bureaucrat(void) : name("Default")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.getName())
{
	this->grade = obj.getGrade();
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if(this == &obj) return *this;
	
	const_cast<std::string&>(this->name) = obj.getName();
	this->grade = obj.getGrade();
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->grade = grade;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::incrementGrade(void)
{
	int checker = this->grade - 1;

	if (checker < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade = checker;
}

void Bureaucrat::decrementGrade(void)
{
	int checker = this->grade + 1;

	if (checker > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade = checker;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}
