/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/26 14:52:33 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	Contact		contact;
	std::string	input;

	while (1)
	{
		std::cout<<": ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout<<"what is your first name: ";
			std::getline(std::cin, input);
			contact.set_firstname(input);
			std::cout<<"what is your last name: ";
			std::getline(std::cin, input);
			contact.set_lastname(input);
			std::cout<<"what is your darkest secret: ";
			std::getline(std::cin, input);
			contact.set_secret(input);
			std::cout<<"what is your phone number: ";
			std::getline(std::cin, input);
			contact.set_phonenumber(input);
			std::cout<<"what is your nickname: ";
			std::getline(std::cin, input);
			contact.set_nickname(input);
			book.add_contact(contact);
		}
		else if (input == "EXIT")
			return (0);
		else if (input == "SEARCH")
			book.display();
	}
	return (0);
}