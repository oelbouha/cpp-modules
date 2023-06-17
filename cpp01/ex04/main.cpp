/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/17 14:58:56 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>

int main(int c, char **v)
{
	std::fstream file;
	std::ifstream myfile;
	std::string line;

	if (c != 4)
	{
		std::cout << "not enought arguments\n";
		return (1);
	}
	file.open("file.replace", std::ios::out);
	myfile.open(v[1]);
	if (myfile.is_open())
	{
		while (myfile)
		{
			std::getline(myfile, line);
			if (strcmp(line.c_str() , v[2]) == 0)
				file << v[3];
		}
	}
	else
		std::cout << "Couldn't open file\n";
	return 0;
}