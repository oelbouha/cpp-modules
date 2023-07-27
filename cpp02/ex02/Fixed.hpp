/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/26 13:16:33 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
	static const	int	fract_bits = 8;
	int				value;

	public:
	Fixed();
	~Fixed();
	Fixed(const float nb);
	Fixed(const int nb);
	Fixed(const Fixed& original);
	void 	operator=(const Fixed& original) ;
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed& 	operator--();
	Fixed& 	operator++();
	Fixed 	operator++(int nb);
	Fixed 	operator--(int nb);
	bool	operator==(const Fixed& nb);
	bool	operator>=(const Fixed& nb);
	bool	operator<=(const Fixed& nb);
	bool	operator<(const Fixed& nb);
	bool	operator>(const Fixed& nb);
	bool	operator!=(const Fixed& nb);
	Fixed	operator-(const Fixed& fixed);
	Fixed	operator+(const Fixed& fixed);
	Fixed	operator/(const Fixed& fixed);
	Fixed	operator*(const Fixed& fixed);
	static	Fixed&	min(Fixed& nb1, Fixed& nb2);
	static	Fixed&	max(Fixed& nb1, Fixed& nb2);
	static const Fixed&	min(const Fixed& nb1, const Fixed& nb2);
	static const Fixed&	max(const Fixed& nb1, const Fixed& nb2);
};

std::ostream& operator << (std::ostream& COUT, const Fixed& original);

#endif