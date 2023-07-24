/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 21:27:09 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/24 10:22:05 by oelbouha         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	int	i; 
	std::string arr[4] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4 && arr[i] != level)
		i++;
	switch(i)
	{
		case 0:
			Harl::debug();
			Harl::info();
			Harl::warning();
			Harl::error();
			break ;
		case 1:
			Harl::info();
			Harl::warning();
			Harl::error();
			break ;
		case 2:
			Harl::warning();
			Harl::error();
			break ;
		case 3:
			Harl::error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}