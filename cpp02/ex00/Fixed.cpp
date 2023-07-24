/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/24 09:51:25 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	fixed_point_value = 0;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

void Fixed::operator=(const Fixed& original)
{
	(void)original;
	cout << "Copy assignment operator called" << endl;
	fixed_point_value = getRawBits();
}

Fixed::Fixed(const Fixed& original)
{
	cout << "Copy constructor called" << endl;
	fixed_point_value = original.fixed_point_value;
}



int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	fixed_point_value = raw;
}