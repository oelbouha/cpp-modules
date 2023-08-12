/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/10 14:43:03 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	read_and_replace(char **v)
{
	std::ofstream	replace_file;
	std::ifstream	file;
	std::string		s1;
	std::string		filename;
	std::string		line;
	std::size_t		found;

	
	s1 = v[2];
	filename = v[1];
	replace_file.open(filename + ".replace", std::ios::out);
	file.open(v[1]);
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			found = line.find(s1);
			if (found != std::string::npos)
			{
				line = line.erase(found, s1.length());
				line = line.insert(found, v[3]);
			}
			replace_file << line << "\n";
		}
	}
	else
		std::cout << "Couldn't open file\n";
	file.close();
	replace_file.close();
}

int main(int c, char **v)
{
	if (c != 4)
	{
		std::cout << "not enought arguments\n";
		return (1);
	}
	read_and_replace(v);
	return 0;
}