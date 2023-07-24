/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/24 10:15:55 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
	years whereas you started working here since last month.\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]"<< std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
	enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
	years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]"<< std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
	const std::string levels[4] = {"debug", "error", "warning", "info"};
	typedef void (Harl::*func)();
	int		i;

	
	func func_arr[4];
	func_arr[0] = &Harl::debug;
	func_arr[1] = &Harl::error;
	func_arr[2] = &Harl::warning;
	func_arr[3] = &Harl::info;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*func_arr[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
