/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:58:06 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/02 23:49:58 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <deque>
# include <list>
# include <vector>
# include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end()) 
	{
		throw std::runtime_error("value is not in this container");
	}
	return iter;
}

#endif

