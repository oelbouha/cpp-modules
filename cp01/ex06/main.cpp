/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/03 23:56:38 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int c, char **v)
{
	if (c != 2)
	{
		std::cout << "not enought arguments" << std::endl;
		return (1);
	}
	Harl obj;
	obj.complain(v[1]);
	return 0;
}