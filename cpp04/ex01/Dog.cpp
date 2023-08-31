/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:58:26 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/29 00:09:53 by oelbouha         ###   ########.fr       */
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
		brain = new Brain();
	}
	return (*this);
}

Dog::Dog()
{
	std::cout << "Dog default constructor called" << newline;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << newline;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "dog barks"<< newline;
}

std::string Dog::getType() const
{
	return (type);
}