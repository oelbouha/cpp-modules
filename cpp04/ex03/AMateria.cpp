/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:47:04 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/10 14:20:19 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria default constructor called" << newline;
	type = "default";
}

AMateria::AMateria(std::string const& _type)
{
	type = _type;
}

AMateria::AMateria(const AMateria& other)
{
	// std::cout << "AMateria copy constructor called" << newline;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	// std::cout << "AMateria copy assignment constructor called" << newline;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout<< "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}


