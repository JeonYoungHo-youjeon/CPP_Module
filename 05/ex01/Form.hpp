/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:55:36 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 16:38:24 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form {
 private:
	const std::string name;
	bool _signed;
	const int signGrade;
	const int execGrade;
	
	Form(void);
 public:
	Form(const Form& obj);
	Form& operator=(const Form& obj);
	~Form(void);
	Form(std::string name, int signGrade, int execGrade);
	class GradeTooHighException : public std::exception
	{
		public:
		  const char * what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		  const char * what(void) const throw();
	};
	const std::string& getName(void) const;
	bool getSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif
