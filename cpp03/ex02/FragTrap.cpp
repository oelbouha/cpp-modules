/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:14:37 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/03 12:08:37 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << newline;
	name = "default";
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << newline;
}

FragTrap::FragTrap(const FragTrap& original)
{
	std::cout << "FragTrap copy constructor called" << newline;
	*this = original;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "FragTrap copy assignment constructor called" << newline;
	if (this != &copy)
	{
		name = copy.name;
		Hitpoints = copy.Hitpoints;
		Energypoints = copy.Energypoints;
		Attackdamage = copy.Attackdamage;
	}
	return (*this);
}


FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap constructor called" << newline;
	name = _name;
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
}


void	FragTrap::attack(const std::string& target)
{
	if (Hitpoints <= 0 || Energypoints <= 0)
		return ;
	std::cout << "FragTrap " << name << " attacks "<< target << ", causing " << Attackdamage << " points of damage!" << newline;
	if (Energypoints > 0)
	{
		Energypoints -= 1;
		if (Energypoints < 0)
			Energypoints = 0;
	}
}

void	FragTrap::guardGate()
{
	std::cout << "FragTrap is now in Gate keeper mode." << newline;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "high fives " << newline;
}