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
	name = "Character";
	for(int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(const std::string _name)
{
	name = _name;
	for(int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		name = copy.name;
		for(int i = 0; i < 4; i++)
			*(this->slots[i]) = *(copy.slots[i]);
	}
	return (*this);
}

Character::~Character(){}

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
		slots[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	slots[idx]->use(target);
}
