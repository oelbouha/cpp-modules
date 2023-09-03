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

#include "Character.hpp"

Character::Character()
{
	index = 0;
	name = "Character";
	for(int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		tmp[i] = NULL;
	}
}

Character::Character(const std::string _name)
{
	index = 0;
	name = _name;
	for(int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		tmp[i] = NULL;
	}
}

Character::Character(const Character& other)
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

Character& Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		name = copy.name;
		for(int i = 0; i < 4 && copy.slots[i]; i++)
			*(this->slots[i]) = *(copy.slots[i]);
	}
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		delete slots[i];
		delete tmp[i];
	}
}

std::string const& Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	int i;

	if (m != NULL)
	{
		for(i = 0 ; i < 4 && slots[i] != NULL; i++);
		if (i == 4)
		{
			std::cout << "slots is full" << std::endl;
			return ;
		}
		slots[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "make sure you enter an index between 0 and 4" << std::endl;
		return ;
	}
	if (slots[idx] != NULL)
		tmp[idx] = slots[idx];
	slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "make sure you enter an index between 0 and 4" << std::endl;
		return ;
	}
	if (slots[idx] != NULL)
		slots[idx]->use(target);
}
