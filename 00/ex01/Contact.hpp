/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:33 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 21:28:55 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string secret;
		std::string	getShortStr(std::string str);
	public:
		void	AddContect(void);
		void	PrintShortContect(void);
		void	PrintAllContect(void);
};