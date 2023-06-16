/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:48:42 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/16 16:26:10 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	private:
	std::string name;

	public:
	Zombie();
	~Zombie();
	void	announce();
	void	set_name(std::string newname);
};

Zombie* zombieHorde( int N, std::string name );

#endif