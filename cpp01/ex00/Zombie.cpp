/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/16 15:44:21 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}
Zombie::~Zombie()
{
	std::cout<< name<<": destroyed..."<< std::endl;
}

void	Zombie::set_name(std::string new_name)
{
	name = new_name;
}
void	Zombie::announce(void)
{
	std::cout<< name<<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

