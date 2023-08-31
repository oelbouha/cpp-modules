/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/24 00:01:22 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	init()
{
	try
	{
		Form p1("othman", true, 1, 10);
		// Form p2(p1);
		Bureaucrat p("one", 10);
		p1.beSigned(p);
		std::cout << p1;
		p.signForm(p1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

int main(void)
{
	init();
	return (0);
}
