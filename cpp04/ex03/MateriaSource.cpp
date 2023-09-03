/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:57:28 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/01 20:51:37 by oelbouha         ###   ########.fr       */
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
	for(int i = 0; i < 4; i++)
	{
		if (other.slots[i])
			slots[i] = other.slots[i]->clone();
		else
		 	slots[i] = NULL;
	}
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		for(int i = 0; i < 4 && copy.slots[i]; i++)
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
	if (m != NULL && index > 3)
	{
		std::cout << "slots is full" << std::endl;
		return ;
	}
	slots[index] = m;
	index++;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int	i;

	for(i = 0; i < 4 && i < index; i++)
	{
		if (type == slots[i]->getType())
			return (slots[i]->clone());
	}
	return (NULL);
}