/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/23 13:44:38 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class	Fixed
{
	private:
	int					value;
	static const	int	fract_bits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& original);
	void 	operator=(const Fixed& original);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator << (std::ostream& COUT, const Fixed& original);

#endif