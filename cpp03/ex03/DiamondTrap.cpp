/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:45:19 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 12:59:06 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << NEWLINE;
	name = "default_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	Energypoints = ScavTrap::Energypoints;
	Attackdamage = FragTrap::Attackdamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap copy constructor called" << NEWLINE;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap copy assignment constructor called" << NEWLINE;
	if (this != &copy)
	{
		name = copy.name;
		Hitpoints = copy.Hitpoints;
		Energypoints = copy.Energypoints;
		Attackdamage = copy.Attackdamage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called" << NEWLINE;
	ClapTrap::name = _name + "_clap_name";
	name = _name;
	Hitpoints = FragTrap::Hitpoints;
	Energypoints = ScavTrap::Energypoints;
	Attackdamage = FragTrap::Attackdamage;
	std::cout<< "hit " << Hitpoints << " ener " << Energypoints << NEWLINE;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << NEWLINE;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name: " << name << NEWLINE;
	std::cout << "ClapTrap name: " << ClapTrap::name << NEWLINE;
}