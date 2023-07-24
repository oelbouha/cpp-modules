/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:50:47 by oelbouha          #+#    #+#             */
/*   Updated: 2023/07/09 12:08:52 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	firstname = "";
	lastname = "";
	darkest_secret = "";
	nickname = "";
	phonenumber = "";
};

void	Contact::set_firstname(const std::string newname){
	firstname = newname;
}
void	Contact::set_lastname(const std::string newlastname){
	lastname = newlastname;
}
void	Contact::set_nickname(const std::string newnickname){
	nickname = newnickname;
}
void	Contact::set_phonenumber(const std::string newnumber){
	phonenumber = newnumber;
}
void	Contact::set_secret(const std::string newsecret){
	darkest_secret = newsecret;
}
std::string Contact::get_phonenumber(){
	return (phonenumber);
}
std::string Contact::get_firstname(){
	return (firstname);
}
std::string Contact::get_nickname(){
	return (nickname);
}
std::string Contact::get_lastname(){
	return (lastname);
}
std::string Contact::get_secret(){
	return (darkest_secret);
}
