/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:48:42 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/03 22:05:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	private:
	std::string type;

	public:
	Weapon(const std::string& _type);
	const	std::string& getType()const;
	void	setType(const std::string& newtype);
};


#endif