/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:19:00 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/06 09:53:26 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{
	private:
	std::string name;
	Weapon*		weapon;

	public:
	HumanB(const std::string& name);
	void	setWeapon(Weapon& newWeapon);
	void	attack();
};


#endif