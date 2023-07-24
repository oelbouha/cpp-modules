/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:50:47 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/22 22:49:05 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie()
{
	std::cout << name << ": destroyed..." << std::endl;
}

void	Zombie::set_name(std::string new_name)
{
	name = new_name;
}

void	Zombie::announce(void)
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

