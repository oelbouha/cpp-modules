/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:50:20 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/22 22:47:45 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *obj;

	obj = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		obj[i].set_name(name);
		obj[i].announce();
	}
	return (obj);
}