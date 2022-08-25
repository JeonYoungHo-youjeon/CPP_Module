/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:36:44 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 21:52:13 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
 private:
	PresidentialPardonForm(void);
	
 public:
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	void execute(const Bureaucrat& b) const;
	Form* clone(std::string name) const;
};

#endif
