/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:14:37 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/02 10:18:17 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << NEWLINE;
	name = "default";
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
	std::cout << "ScavTrap copy constructor called" << NEWLINE;
	*this = original;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap copy assignment constructor called" << NEWLINE;
	if (this != &copy)
	{
		name = copy.name;
		Hitpoints = copy.Hitpoints;
		Energypoints = copy.Energypoints;
		Attackdamage = copy.Attackdamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << NEWLINE;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "ScavTrap constructor called" << NEWLINE;
	name = _name;
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
}


void	ScavTrap::attack(const std::string& target)
{
	if (Hitpoints <= 0 || Energypoints <= 0)
		return ;
	std::cout << "ScavTrap " << name << " attacks "<< target << ", causing " << Attackdamage << " points of damage!" << NEWLINE;
	if (Energypoints > 0)
	{
		Energypoints -= 1;
		if (Energypoints < 0)
			Energypoints = 0;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << NEWLINE;
}