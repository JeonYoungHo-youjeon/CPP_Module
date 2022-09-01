/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:26:46 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 17:31:54 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b) 
	{
		return (a);
	}
	else 
	{
		return (b);
	}
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b) 
	{
		return (a);
	}
	else 
	{
		return (b);
	}
}

#endif
