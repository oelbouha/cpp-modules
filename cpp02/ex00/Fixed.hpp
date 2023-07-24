/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/22 10:51:35 by oelbouha         ###   ########.fr       */
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
	int					fixed_point_value;
	static const	int	fract_bits;

	public:
	Fixed();
	void	operator=(const Fixed& original);
	Fixed(const Fixed& original);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif