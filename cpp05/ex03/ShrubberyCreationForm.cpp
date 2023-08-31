/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:55 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/23 23:41:20 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << endl;
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm copy assignment constructor called" << endl;
	if (this != &copy)
	{
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default constructor called" << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(string target)
{
	if (this->getGrade() == 145 && this->getGrdeToexecute() == 137)
	{
		cout << target << "create file \n";
	}
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	int		grade;

	grade = executor.getGrade();
	cout << grade << endl;
	if (this->getSign() == true && grade > 0 && grade < 150)
	{
		if (this->getGrade() == 25 && this->getGrdeToexecute() == 5)
			cout << this->target << " create a file" << endl;
	}
	else
	{
		if (grade < 0)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
	}
}