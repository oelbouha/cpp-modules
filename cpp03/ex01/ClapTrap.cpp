/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:49:51 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/03 12:39:32 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "Claptrap copy constructor called" << newline;
	*this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Claptrap copy assignment constructor called" << newline;
	if (this != &copy)
	{
		name = copy.name;
		Hitpoints = copy.Hitpoints;
		Energypoints = copy.Energypoints;
		Attackdamage = copy.Attackdamage;
	}
	return (*this);
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << newline;
	name = "default";
	Hitpoints = 10;
	Energypoints = 10;
	Attackdamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap constructor called" << newline;
	name = _name;
	Hitpoints = 10;
	Energypoints = 10;
	Attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << newline;
}

void	ClapTrap::attack(const std::string& target)
{
	if (Hitpoints <= 0 || Energypoints <= 0)
		return ;
	std::cout << "ClapTrap " << name << " attacks "<< target << ", causing " << Attackdamage << " points of damage!" << newline;
	if (Energypoints > 0)
	{
		Energypoints -= 1;
		if (Energypoints < 0)
			Energypoints = 0;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "take damage"<< newline;
	if (Hitpoints > 0)
	{
		Hitpoints -= amount;
		if (Hitpoints < 0)
			Hitpoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "repairing ..."<< newline;
	Hitpoints += amount;
	if (Energypoints > 0)
	{
		Energypoints -= 1;
		if (Energypoints < 0)
			Energypoints = 0;
	}
}