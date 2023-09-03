/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:48:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/03 12:19:34 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << newline;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << newline;
	type = "default";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << newline;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound "<< newline;
}

std::string WrongAnimal::getType() const
{
	return (type);
}