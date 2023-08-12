/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:48:42 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/31 23:48:51 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	private:
	std::string firstname;
	std::string lastname;
	std::string darkest_secret;
	std::string nickname;
	std::string phonenumber;

	public:
	void	set_firstname(const std::string newname);
	void	set_lastname(const std::string newlastname);
	void	set_nickname(const std::string newnickname);
	void	set_phonenumber(const std::string newnumber);
	void	set_secret(const std::string newsecret);

	std::string		get_phonenumber();
	std::string		get_firstname();
	std::string		get_nickname();
	std::string		get_lastname();
	std::string		get_secret();
};

#endif
