/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:31:03 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/25 22:16:18 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("a", 150);
		Bureaucrat b("b", 1);
		Form c("c", 50, 50);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << std::endl;

		a.signForm(c);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << std::endl;

		b.signForm(c);
		
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
