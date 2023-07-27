/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/27 14:31:08 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	index = 0;
}

void	printChar(char c, int len, bool newline, bool pipe)
{
	int	i;

	i = -1;
	while (++i < len)
		std::cout << c;
	if (pipe)
		std::cout << "|";
	if (newline)
		std::cout << std::endl;
}

int	get_index()
{
	std::string input;
	int			num;

	while (1)
	{
		std::cout<<"enter index: ";
		std::getline(std::cin, input);
		try
		{
			num = std::stoi(input);
			if (num >= 0)
				break ;
			else
				std::cout<<"enter positive number"<<std::endl;
		}
		catch(std::invalid_argument& e){
			std::cout<<"enter a valid number"<<std::endl;
		};
	}
	return (num);
}

void	display_contact_header_info()
{
	printChar('=', 44, true, false);
	std::cout<< "index";
	printChar(' ', 5, false, true);
	std::cout<< "firstname";
	printChar(' ', 1, false, true);
	std::cout<< "lastname";
	printChar(' ', 2, false, true);
	std::cout<< "nickname";
	printChar(' ', 2, true, true);
	printChar('=', 44, true, false);
}

void	display_contact_info(std::string input)
{
	int	j;

	j = -1;
	if (input.length() < 10)
	{
		std::cout<< input;
		printChar(' ', 10 - input.length(), false, true);
		return ;
	}
	while (++j <= 10 && input[j])
	{
		if (j == 9)
		{
			printChar('.', 1, false, true);
			break ;
		}	
		std::putchar(input[j]);
	}
}

void	PhoneBook::add_contact(const Contact& newcontact)
{
	int				arr_size;
	static int		len;

	arr_size = 2;
	if (index < arr_size)
	{
		contact[index] = newcontact;
		index++;
	}
	else
	{
		if (len == 0)
			contact[0] = newcontact;
		else
			contact[len] = newcontact;
		len++;
		if (len >= arr_size)
			len = 0;
	}
}

void	PhoneBook::display()
{
	int		num;
	int		i;

	if (index == 0)
	{
		std::cout<< "contact list is empty"<< std::endl;
		return ;
	}
	display_contact_header_info();
	i = -1;
	while (++i < index)
	{
		display_contact_info(std::to_string(i));
		display_contact_info(contact[i].get_firstname());
		display_contact_info(contact[i].get_lastname());
		display_contact_info(contact[i].get_nickname());
		std::cout << std::endl;
	}
	num = get_index();
	if (num > index)
	{
		std::cout<< "index is big than array size"<< std::endl;
		return ;
	}
	std::cout<< "index: "<< num<< std::endl;
	std::cout<< "first name: "<< contact[num].get_firstname()<< std::endl;
	std::cout<< "last name: "<< contact[num].get_lastname()<< std::endl;
	std::cout<< "nickname: "<< contact[num].get_nickname()<< std::endl;
	std::cout<< "phone number: "<< contact[num].get_phonenumber()<< std::endl;
	std::cout<< "darkest secret: "<< contact[num].get_secret()<< std::endl;
}

