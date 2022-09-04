/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:45:55 by youjeon           #+#    #+#             */
/*   Updated: 2022/09/05 01:07:09 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
 public:
	MutantStack(void) {};
	MutantStack(const MutantStack& obj) {*this = obj;};
	MutantStack& operator=(const MutantStack& obj) {*this = obj; return (*this);}
	~MutantStack(void) {};
	
	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator begin(void) {return this->c.begin();}
	iterator end(void) {return this->c.end();}

	typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin(void) {return this->c.rbegin();}
	reverse_iterator rend(void) {return this->c.rend();}

	typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
	const_iterator cbegin(void) {return this->c.cbegin();}
	const_iterator cend(void) {return this->c.cend();}

	typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
	const_iterator crbegin(void) {return this->c.crbegin();}
	const_iterator crend(void) {return this->c.crend();}
};

#endif

