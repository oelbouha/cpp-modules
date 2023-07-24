/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:10:33 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/22 23:35:13 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact		contact[8];
	int			index;

	public:
	PhoneBook();
	void	add_contact(const Contact& newcontact);
	void	display();
};

#endif
