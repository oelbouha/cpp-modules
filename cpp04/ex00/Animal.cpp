/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:48:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/02 22:01:20 by oelbouha         ###   ########.fr       */
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
	type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << newline;
}

void	Animal::makeSound() const
{
	std::cout << "Animal's make sound "<< newline;
}

std::string Animal::getType() const
{
	return (type);
}