/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/06 12:07:46 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

void	init()
{
	try
	{
		Bureaucrat p1("othman", 11);
		cout << p1;

		AForm *form = new RobotomyRequestForm("robot");

		form->beSigned(p1);
		cout << endl;
		p1.executeForm(*form);
		cout << endl;
		form->execute(p1);
		delete form;
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}
}

int main(void)
{
	init();
	return (0);
}
