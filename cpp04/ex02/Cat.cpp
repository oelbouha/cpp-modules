/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:55:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/01 15:12:26 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called" << newline;
	brain = new Brain();
	*this = other;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
		*(brain) = *(copy.brain);
	}
	return (*this);
}

Cat::Cat()
{
	std::cout << "Cat default constructor called" << newline;
	brain = new Brain();
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << newline;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "cat meows"<< newline;
}

std::string Cat::getType() const
{
	return (type);
}