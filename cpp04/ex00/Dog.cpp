/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:58:26 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 11:07:43 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called" << newline;
	*this = other;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Dog::Dog()
{
	std::cout << "Dog default constructor called" << newline;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << newline;
}

void	Dog::makeSound() const
{
	std::cout << "dog barks"<< newline;
}

std::string Dog::getType() const
{
	return (type);
}