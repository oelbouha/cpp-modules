/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/09 10:20:05 by oelbouha         ###   ########.fr       */
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
		std::cout << NLINE;
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
				std::cout<<"enter positive number"<< NLINE;
		}
		catch(std::invalid_argument& e){
			std::cout<<"enter a valid number"<< NLINE;
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
		printChar(' ', 10 - input.length(), false, false);
		std::cout<< input << "|";
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

	arr_size = 8;
	if (index < arr_size)
	{
		contact[index] = newcontact;
		index++;
	}
	else
	{
		contact[len % arr_size] = newcontact;
		len++;
	}
}

void	PhoneBook::display()
{
	int		num;
	int		i;

	if (index == 0)
	{
		std::cout<< "contact list is empty"<< NLINE;
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
		std::cout << NLINE;
	}
	num = get_index();
	if (num > index)
	{
		std::cout<< "index is big than array size"<< NLINE;
		return ;
	}
	std::cout<< "index: "<< num<< NLINE;
	std::cout<< "first name: "<< contact[num].get_firstname()<< NLINE;
	std::cout<< "last name: "<< contact[num].get_lastname()<< NLINE;
	std::cout<< "nickname: "<< contact[num].get_nickname()<< NLINE;
	std::cout<< "phone number: "<< contact[num].get_phonenumber()<< NLINE;
	std::cout<< "darkest secret: "<< contact[num].get_secret()<< NLINE;
}

