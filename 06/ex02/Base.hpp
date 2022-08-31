/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:20:02 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 02:47:18 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <exception>

class Base 
{
  public:
	virtual ~Base(void);
};

class A : public Base 
{
};

class B : public Base 
{
};

class C : public Base 
{
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
