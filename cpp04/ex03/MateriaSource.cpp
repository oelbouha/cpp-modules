/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:57:28 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/10 14:19:42 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource default constructor called" << newline;
	index = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource copy constructor called" << newline;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	// std::cout << "MateriaSource copy assignment constructor called" << newline;
	if (this != &copy)
	{
		this->index = copy.index;
		for(int i = 0; i < 4; i++)
			this->slots[i] = copy.slots[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout<< "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4 && i < index; i++)
		delete slots[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m != NULL && index < 4)
	{
		slots[index] = m->clone();
		index++;
	}
	delete m;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int	i;

	for(i = 0; i < 4 && i < index; i++)
	{
		if (type == slots[i]->getType())
			break ;
	}
	return (slots[i]);
}