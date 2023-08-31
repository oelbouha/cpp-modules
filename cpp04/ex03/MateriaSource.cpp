/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:57:28 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/24 14:42:55 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	index = 0;
	for(int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		this->index = copy.index;
		for(int i = 0; i < 4; i++)
			*(this->slots[i]) = *(copy.slots[i]);
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
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
			return (slots[i]);
	}
	return (NULL);
}