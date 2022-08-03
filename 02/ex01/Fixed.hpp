/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:36:42 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/03 17:51:41 by youjeon          ###   ########.fr       */
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
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif

