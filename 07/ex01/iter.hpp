/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:26:37 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/01 21:52:57 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter (T *array, size_t length, void (*fn)(T))
{
	for (size_t i = 0; i < length; i++)
	{
		fn(array[i]);
	}
}

template<typename T>
void print(T str)
{
	std::cout << str << " ";
}

template<typename T>
void printSqrt(T num)
{
	T tmp = num * num;
	std::cout << tmp << " ";
}

#endif
