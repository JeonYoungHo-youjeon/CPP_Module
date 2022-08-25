/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:21:34 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 21:54:41 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
 private:
	RobotomyRequestForm(void);
	
 public:
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	void execute(const Bureaucrat& b) const;
	Form* clone(std::string name) const;
};

#endif

