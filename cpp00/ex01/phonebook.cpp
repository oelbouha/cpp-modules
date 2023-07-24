/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/18 22:22:36 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	get_index()
{
	std::string input;
	int			num;

	while (1)
	{
		std::cout<<"enter index: ";
		std::cin>>input;
		try{
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

void	display_contact_info()
{
	std::cout <<"============================================"<< std::endl;
	std::cout <<std::left <<std::setw(10) <<"index" <<"|";
	std::cout <<std::left <<std::setw(10) <<"firstname" <<"|";
	std::cout <<std::left <<std::setw(10) <<"lastname" <<"|";
	std::cout <<std::left <<std::setw(10) <<"nickname" <<"|"<< std::endl;
	std::cout <<"============================================"<< std::endl;
}

PhoneBook::PhoneBook(){
	index = 0;
}

void	PhoneBook::add_contact(const Contact& newcontact)
{
	int				arr_size;
	static int		len;

	arr_size = 8;
	if (index < 8){
		contact[index] = newcontact;
		index++;
	}
	else{
		len += index;
		contact[len % 2] = newcontact;
		len++;
	}
}

void	PhoneBook::display()
{
	std::string	input;
	int			num;
	int			i;

	if (index == 0)
	{
		std::cout<<"contact list is empty"<<std::endl;
		return ;
	}
	display_contact_info();
	for (i = 0; i < index; i++)
	{
		std::cout <<std::left <<std::setw(10) <<i << "|";
		if (contact[i].get_firstname().length() > 10)
			std::cout <<std::left <<contact[i].get_firstname().substr(0, 9) <<"." <<"|";
		else
			std::cout <<std::left <<std::setw(10) <<contact[i].get_firstname().substr(0, 10) <<"|";
		if (contact[i].get_lastname().length() > 10)
			std::cout <<std::left <<contact[i].get_lastname().substr(0, 9) <<"." <<"|";
		else
			std::cout <<std::left <<std::setw(10) <<contact[i].get_lastname().substr(0, 10) <<"|";
		if (contact[i].get_nickname().length() > 10)
			std::cout <<std::left <<contact[i].get_nickname().substr(0, 9) <<"." <<"|" <<std::endl;
		else
			std::cout <<std::left <<std::setw(10) <<contact[i].get_nickname().substr(0, 10) <<"|" <<std::endl;
	}
	num = get_index();
	if (num < index)
	{
		i = -1;
		while (++i != num)
			;
		std::cout << std::setw(15) <<"index" <<": " << i<< std::endl;
		std::cout << std::setw(15) <<"first name" <<": " <<contact[i].get_firstname() <<std::endl;
		std::cout << std::setw(15) <<"last name" <<": " <<contact[i].get_lastname() <<std::endl;
		std::cout << std::setw(15) <<"nickname" <<": " <<contact[i].get_nickname() <<std::endl;
		std::cout << std::setw(15) <<"phone number" <<": " <<contact[i].get_phonenumber() <<std::endl;
		std::cout << std::setw(15) <<"darkest secret" <<": " <<contact[i].get_secret() <<std::endl;
	}
	else
		std::cout <<"index range big" <<std::endl;
}

