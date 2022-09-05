/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:03:07 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/05 15:29:09 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const Form& obj) : name(obj.getName()), _signed(obj.getSigned()), signGrade(obj.getSignGrade()), execGrade(obj.getExecGrade())
{
}

Form& Form::operator=(const Form& obj)
{
	if(this == &obj) return *this;
	const_cast<std::string &>(this->name) = obj.getName();
	const_cast<int &>(this->signGrade) = obj.getSignGrade();
	const_cast<int &>(this->execGrade) = obj.getExecGrade();
	this->_signed = obj._signed;
	return (*this);
}

Form::~Form(void)
{
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), _signed(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
	{
		throw GradeTooHighException();
	}
	else if (signGrade < 1 || execGrade < 1)
	{
		throw GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what(void) const throw() 
{
	return "Grade too high...";
}

const char *Form::GradeTooLowException::what(void) const throw() 
{
	return "Grade too low...";
}

const char *Form::ThisIsNotSignedException::what(void) const throw() 
{
	return "this is not signed, can not do this...";
}

const std::string& Form::getName(void) const
{
	return (this->name);
}

bool Form::getSigned(void) const
{
	return (this->_signed);
}

int Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int Form::getExecGrade(void) const
{
	return (this->execGrade);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (this->signGrade >= b.getGrade())
	{
		_signed = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

void Form::checkExec(const Bureaucrat& b) const
{
	if (this->_signed == false)
	{
		throw ThisIsNotSignedException();
	}
	else if (b.getGrade() > execGrade)
	{
		throw GradeTooLowException();
	}	
}

void Form::setName(std::string name)
{
	const_cast<std::string&>(this->name) = name;
}

void Form::setSigned(bool b)
{
	this->_signed = b;
}


std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << f.getName() 
		<< std::boolalpha <<", signed : " << f.getSigned()
		<< ", signGrade : " << f.getSignGrade()
		<< ", execGrade : " << f.getExecGrade();
	return (out);
}

