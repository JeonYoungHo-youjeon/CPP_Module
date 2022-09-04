/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:48:15 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/04 17:32:05 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <stdexcept>
# include <iterator>
# include <climits>


class Span {
 private:
	std::size_t size;
	std::vector<int> v;
	Span(void);
 public:
	Span(const Span& obj);
	Span& operator=(const Span& obj);
	~Span(void);
	Span(std::size_t i);
	void addNumber(int value);
	void addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	std::size_t shortestSpan() const;
	std::size_t longestSpan() const;
	std::size_t getSize() const;
	std::vector<int> getVector() const;
};

#endif
