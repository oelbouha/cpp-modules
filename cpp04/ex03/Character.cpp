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
	// std::cout << "Character default constructor called" << newline;
	name = "Character";
	index = 0;
	for(int i = 0; i < 3; i++)
		slots[i] = NULL;
}

Character::Character(const std::string _name)
{
	// std::cout << "Character constructor called" << newline;
	name = _name;
	index = 0;
	for(int i = 0; i < 3; i++)
		slots[i] = NULL;
}

Character::Character(const Character& other)
{
	// std::cout << "Character copy constructor called" << newline;
	*this = other;
}

Character& Character::operator=(const Character& copy)
{
	// std::cout << "Character copy assignment constructor called" << newline;
	if (this != &copy)
	{
		name = copy.name;
		for(int i = 0; i < 4; i++)
			this->slots[i] = copy.slots[i];
	}
	return (*this);
}

Character::~Character()
{
	// std::cout<< "Character destructor called" << std::endl;
	delete tmp;
}

std::string const& Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (m != NULL && index < 3)
	{
		slots[index] = m;
		index++;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx >= index)
		return ;
	tmp = slots[idx];
	slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx >= index)
		return ;
	slots[idx]->use(target);
}
