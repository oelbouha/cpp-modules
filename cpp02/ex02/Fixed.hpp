/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/15 11:15:38 by oelbouha         ###   ########.fr       */
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
	static  int	fract_bits; 
	int					value;
	int					fract;

	public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed	operator=(const Fixed& copy) ;
	~Fixed();

	Fixed(const float nb);
	Fixed(const int nb);

	int				toInt(void) const;
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;

	Fixed&			operator--();
	Fixed&			operator++();
	Fixed			operator++(int);
	Fixed			operator--(int);

	bool			operator==(const Fixed& nb);
	bool			operator>=(const Fixed& nb);
	bool			operator<=(const Fixed& nb);
	bool			operator<(const Fixed& nb);
	bool			operator>(const Fixed& nb);
	bool			operator!=(const Fixed& nb);

	Fixed			operator-(const Fixed& fixed);
	Fixed			operator+(const Fixed& fixed);
	Fixed			operator/(const Fixed& fixed);
	Fixed			operator*(const Fixed& fixed);

	static			Fixed&	max(Fixed& nb1, Fixed& nb2);
	static			Fixed&	min(Fixed& nb1, Fixed& nb2);

	static const	Fixed&	min(const Fixed& nb1, const Fixed& nb2);
	static const	Fixed&	max(const Fixed& nb1, const Fixed& nb2);
};

std::ostream& operator<<(std::ostream& COUT, const Fixed& original);

#endif