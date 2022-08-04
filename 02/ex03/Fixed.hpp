/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:36:42 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/04 12:49:18 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
 private:
	int					value;
	const static int	bits = 8;
 public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);
	Fixed(int num);
	Fixed(const float num);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const &ref) const;
	bool	operator<(Fixed const &ref) const;
	bool	operator>=(Fixed const &ref) const;
	bool	operator<=(Fixed const &ref) const;
	bool	operator==(Fixed const &ref) const;
	bool	operator!=(Fixed const &ref) const;
	
	Fixed	operator+(Fixed const &ref) const;
	Fixed	operator-(Fixed const &ref) const;
	Fixed	operator*(Fixed const &ref) const;
	Fixed	operator/(Fixed const &ref) const;

	Fixed	&operator++(void);
	const Fixed	operator++(int);
	Fixed	&operator--(void);
	const Fixed	operator--(int);

	static Fixed	&min(Fixed &ref1, Fixed &ref2);
	static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
	
	static Fixed	&max(Fixed &ref1, Fixed &ref2);
	static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);
	
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif
