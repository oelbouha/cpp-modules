/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:20:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/06 10:02:13 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strptr;
	std::string& strref = str;

	strptr = &str;
	std::cout << "memory address: str   : " << &str << std::endl;
	std::cout << "memory address: strptr: " << strptr << std::endl;
	std::cout << "memory address: strref: " << &strref << std::endl;
	std::cout << "str   : " << str << std::endl;
	std::cout << "strptr: " << *strptr << std::endl;
	std::cout << "strref: " << strref << std::endl;
}