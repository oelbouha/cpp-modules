/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/11 22:54:20 by oelbouha         ###   ########.fr       */
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

Fixed&	Fixed::operator=(const Fixed& copy)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &copy)
	{
		fixed_point_value = copy.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
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