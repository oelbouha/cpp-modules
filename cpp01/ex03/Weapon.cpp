/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:39 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/17 12:03:38 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& _type){
	type = _type;
};

void	Weapon::setType(const std::string& newtype)
{
	type = newtype;
	// std::cout<<type<<":::::::::::\n";
}

const	std::string& Weapon::getType()const{
	// std::cout<<type<<"::::::::\n";
	return (type);
}