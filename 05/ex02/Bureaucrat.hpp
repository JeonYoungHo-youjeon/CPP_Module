/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:55:11 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 20:52:17 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat {
 private:
	const std::string name;
	int grade;
 public:
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
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& obj);
	~Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	void incrementGrade(void);
	void decrementGrade(void);
	std::string getName() const;
	int getGrade() const;
	void signForm(Form& f) const;

	void executeForm(const Form & form);
};


std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

#endif
