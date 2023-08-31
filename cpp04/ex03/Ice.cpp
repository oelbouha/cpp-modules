/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:47:04 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/09 11:59:09 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice& Ice::operator=(const Ice& copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone ()const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << type << ": \"* shoots an ice bolt at ";
	std::cout << target.getName() << " *\"" << newline;
}


