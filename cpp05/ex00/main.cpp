/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/06 11:53:20 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	init()
{
	try
	{
		Bureaucrat p1(160, "othman");
		cout << p1;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what();
	}
}

int main(void)
{
	init();
	return (0);
}
