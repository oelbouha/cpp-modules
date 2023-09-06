/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/06 10:23:33 by oelbouha         ###   ########.fr       */
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

		AForm *form = new RobotomyRequestForm("sherbery");

		form->beSigned(p1);
		p1.executeForm(*form);
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
