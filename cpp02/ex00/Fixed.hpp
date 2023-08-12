/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/12 22:07:09 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class	Fixed
{
	private:
	int	fixed_point_value;
	static const	int	fract_bits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed&	operator=(const Fixed& copy);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif