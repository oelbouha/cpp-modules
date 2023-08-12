/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/12 22:02:57 by oelbouha         ###   ########.fr       */
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
	int		value;
	static const	int	fract_bits = 8;

	public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed&	operator=(const Fixed& copy);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
};

std::ostream&	operator << (std::ostream& COUT, const Fixed& original);

#endif