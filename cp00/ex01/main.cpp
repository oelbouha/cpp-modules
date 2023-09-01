/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/02 10:02:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	get_input(const std::string line)
{
	int			i;
	std::string	input;

	i = 0;
	while (1)
	{
		std::cout<< line;
		std::getline(std::cin, input);
		if (input.length())
			break ;
	}
	return (input);	
}
int main()
{
	PhoneBook	book;
	Contact		contact;
	std::string	input;
	
	while (1)
	{
		std::cout<<"ADD    : add a new contact" << NLINE;
		std::cout<<"SEARCH : display contact list" << NLINE;
		std::cout<<"EXIT   : exit from program" << NLINE;
		std::cout<<"Enter:-> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			contact.set_firstname(get_input("what is your first name: "));
			contact.set_lastname(get_input("what is your last name: "));
			contact.set_secret(get_input("what is your darkest secret: "));
			contact.set_phonenumber(get_input("what is your phone number: "));
			contact.set_nickname(get_input("what is your nickname: "));
			book.add_contact(contact);
		}
		else if (input == "EXIT")
			return (0);
		else if (input == "SEARCH")
			book.display();
	}
	return (0);
}