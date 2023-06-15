/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:18:48 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/07 14:30:19 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	Contact		contact;
	char		input[20];

	while (1)
	{
		std::cout<<": ";
		std::cin>>input;
		if (strcmp(input, "ADD") == 0)
		{
			std::cout<<"what is your first name: ";
			std::cin>>input;
			contact.set_firstname(input);
			std::cout<<"what is your last name: ";
			std::cin>>input;
			contact.set_lastname(input);
			std::cout<<"what is your darkest secret: ";
			std::cin>>input;
			contact.set_secret(input);
			std::cout<<"what is your phone number: ";
			std::cin>>input;
			contact.set_phonenumber(input);
			std::cout<<"what is your nickname: ";
			std::cin>>input;
			contact.set_nickname(input);
			book.add_contact(contact);
		}
		else if (strcmp(input, "EXIT") == 0)
			return (0);
		else if (strcmp(input, "SEARCH") == 0){
			book.display();
		}
	}
	return (0);
}