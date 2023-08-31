/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:49:43 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/31 10:03:28 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

# define newline "\n"

class	ClapTrap
{
	private:
	std::string name;
	int			Hitpoints;
	int			Energypoints;
	int			Attackdamage;

	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap& original);
	ClapTrap&	operator=(const ClapTrap& original);
	ClapTrap(std::string _name);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif