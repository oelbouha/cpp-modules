/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/24 09:40:34 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::Fixed(const int nb)
{
	cout << "Int constructor called" << endl;
	value = nb * (2 << fract_bits);
}

void Fixed::operator=(const Fixed& original)
{
	cout << "Copy assignment operator called" << endl;
	value = original.value;
}

Fixed::Fixed(const float nb)
{
	cout << "Float constructor called" << endl;
	value = roundf(nb * (2 << fract_bits));
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed& original)
{
	cout << "Copy constructor called" << endl;
	value = original.value;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (2 << fract_bits));
}

int Fixed::toInt(void) const{
	return (value / (2 << fract_bits));
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& original)
{
	COUT << original.toFloat();
	return (COUT);
}
