/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:02:14 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/16 15:42:58 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class Zombie
{
	private:
	std::string name;
	
	public:
	Zombie();
	~Zombie();
	void	announce();
	void	set_name(std::string new_name);
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );


#endif