/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/06 10:20:46 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name){
	weapon = nullptr;
};

void	HumanB::attack()
{
	if (weapon)
		std::cout << name <<" attacks with their "<< weapon->getType() << "\n";
	else
		std::cout << name <<" does not have a weapon " << "\n";
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}
