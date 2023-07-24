/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:23:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/22 22:26:21 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& _name, Weapon& _weapon){
	weapon = &_weapon;
	name = _name;
};

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}