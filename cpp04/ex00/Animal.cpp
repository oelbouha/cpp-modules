/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:48:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 11:09:03 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called" << newline;
	*this = other;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Animal::Animal()
{
	std::cout << "Animal default constructor called" << newline;
	type = "default";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << newline;
}

void	Animal::makeSound() const
{
	std::cout << "make a sound "<< newline;
}
std::string Animal::getType() const
{
	return (type);
}