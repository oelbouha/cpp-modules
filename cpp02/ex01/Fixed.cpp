/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/19 19:16:10 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int nb){
	std::cout << "Int constructor called" << std::endl;
	value = nb << fract_bits;
}

Fixed&	Fixed::operator=(const Fixed& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		value = copy.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(const float nb){
	std::cout << "Float constructor called" << std::endl;
	value = roundf(nb * (1 << fract_bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const{
	return ((float)value / (1 << fract_bits));
}

int Fixed::toInt(void) const{
	return (value >> fract_bits);
}

std::ostream&	operator<<(std::ostream& COUT, const Fixed& original){
	COUT << original.toFloat();
	return (COUT);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
