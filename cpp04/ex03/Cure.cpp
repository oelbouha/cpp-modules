/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:47:04 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/09 11:59:09 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure default constructor called" << newline;
	type = "cure";
}

Cure::Cure(const Cure& other)
{
	// std::cout << "Cure copy constructor called" << newline;
	*this = other;
}

Cure& Cure::operator=(const Cure& copy)
{
	// std::cout << "Cure copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Cure::~Cure()
{
	// std::cout<< "Cure destructor called" << std::endl;
}

AMateria* Cure::clone ()const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << type << ": \"* heals ";
	std::cout << target.getName() << "’s wounds *\"" << newline;
}


