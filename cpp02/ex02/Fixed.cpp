/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/26 13:16:55 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int nb)
{
	value = nb * (2 << fract_bits);
}

void Fixed::operator=(const Fixed& copy)
{
	if (*this != copy){
		value = copy.value;
	}
}

Fixed::Fixed(const float nb)
{
	value = roundf(nb * (2 << fract_bits));
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
	*this = original;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (2 << fract_bits));
}

int Fixed::toInt(void) const
{
	return (value / (2 << fract_bits));
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& original)
{
	COUT << original.toFloat();
	return (COUT);
}

Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1.toFloat() < nb2.toFloat())
		return (nb1);
	return (nb2);
}

const Fixed&	Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.toFloat() < nb2.toFloat())
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1.toFloat() > nb2.toFloat())
		return (nb1);
	return (nb2);
}

const Fixed&	Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.value > nb2.value)
		return (nb1);
	return (nb2);
}

Fixed	Fixed::operator+(const Fixed& fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed& fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed& fixed)
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed& fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

bool	Fixed::operator==(const Fixed& nb)
{
	if (this->toFloat() == nb.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& nb)
{
	if (this->toFloat() >= nb.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& nb)
{
	if (this->toFloat() <= nb.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& nb)
{
	if (this->toFloat() != nb.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& nb)
{
	if (this->toFloat() > nb.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& nb)
{
	if (this->toFloat() < nb.toFloat())
		return (true);
	return (false);
}

Fixed&	Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed&	Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed	Fixed::operator++(int nb)
{
	Fixed temp;

	temp = *this;
	value += nb;
	return (*this);
}

