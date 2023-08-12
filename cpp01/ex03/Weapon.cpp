/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:39 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/10 15:35:20 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& _type){
	type = _type;
};

void	Weapon::setType(const std::string& newtype)
{
	type = newtype;
}

const	std::string& Weapon::getType()const{
	return (type);
}