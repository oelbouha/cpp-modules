/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/05 00:51:17 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	init()
{
	try
	{
		Form p1("FORM!", 10, 10);
		Bureaucrat p("hakim", 1);
		p1.beSigned(p);

		cout << p1;
		cout << endl;
		p.signForm(p1);
	}
	catch (std::exception& execption)
	{
		cout << execption.what();
	}
}

int main(void)
{
	init();
	return (0);
}
