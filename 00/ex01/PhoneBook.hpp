/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:14:25 by youjeon           #+#    #+#             */
/*   Updated: 2022/07/27 21:14:25 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	public:
		PhoneBook();
		void	AddContact();
		void	PrintContact();		
};