/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/24 12:06:25 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

void	asciiTrees(void)
{
	int	j;
	int size;
	
	j = 0;
	size = 20;
	for(int i = 1; i < size / 2; i++)
	{
		for(int k = 1; k < size; k++)
		{
			if (k <= size / 2 + j && k >= size / 2 - j)
				cout << "#";
			else
				cout << " ";
		}
		j++;
		cout << endl;
	}
	for(int i = 0 ; i < 2; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == size / 2 - 1)
				cout << "|";
			else
				cout << " ";
		}
		cout << endl;
	}
	
}
void	init()
{
	try
	{
		Bureaucrat p1("othman", 10);
		cout << p1;

		AForm *form = new PresidentialPardonForm();
		p1.executeForm(*form);
		form->execute(p1);
		cout << form->getGrade() << endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

int main(void)
{
	// init();
	asciiTrees();
	return (0);
}
