/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/03 21:55:37 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "default";
}

Zombie::~Zombie()
{
	std::cout<< name <<": destroyed..."<< std::endl;
}

void	Zombie::set_name(std::string new_name)
{
	name = new_name;
}
void	Zombie::announce(void)
{
	std::cout<< name<<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

