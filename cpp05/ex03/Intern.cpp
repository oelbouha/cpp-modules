/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:16:58 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/25 15:13:13 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(const Intern& other)
{
	std::cout << "Intern copy constructor called" << endl;
	*this = other;
}

Intern& Intern::operator=(const Intern& copy)
{
	std::cout << "Intern copy assignment constructor called" << endl;
	if (this != &copy)
	{
	
	}
	return (*this);
}

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << endl;
}

AForm*	Intern::makeForm(string name, string target)
{
	AForm*	obj[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	string arr[3] = {"presidential pardon", "robotomy request", "shrubberycreation"};
	int		i;

	for (i = 0; i < 3; i++)
	{
		if (name == arr[i])
		{
			cout << "Intern creates " << name << endl;
			return (obj[i]);
		}
	}
	cout << "Intern couldn't creates " << name << endl;
	return (NULL);
}
