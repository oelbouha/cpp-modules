/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:14:43 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/08 15:53:25 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();
	ScavTrap(const ScavTrap& original);
	ScavTrap&	operator=(const ScavTrap& original);
	void		attack(const std::string& target);
	void		guardGate();
};


#endif