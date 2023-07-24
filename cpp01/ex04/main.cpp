/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/24 10:45:34 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <regex>
#include <string>
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
	std::regex pattern(v[2]);
	file.open("file.replace", std::ios::out);
	myfile.open(v[1]);
	if (myfile.is_open())
	{
		while (myfile)
		{
			std::getline(myfile, line);
			std::string output = std::regex_replace(line, pattern, v[3]);
			file << output;
		}
	}
	else
		std::cout << "Couldn't open file\n";
	return 0;
}