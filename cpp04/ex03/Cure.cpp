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
	type = "cure";
}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure& Cure::operator=(const Cure& copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Cure::~Cure()
{
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


