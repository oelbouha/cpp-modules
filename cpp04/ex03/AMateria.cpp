/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:47:04 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/01 20:49:43 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "default";
}

AMateria::AMateria(std::string const& _type)
{
	type = _type;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
	{
		
	}
	return (*this);
}

AMateria::~AMateria(){}

std::string const& AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << type << ": \"* heals ";
	std::cout << target.getName() << "AMateria wounds *\"" << newline;
}


