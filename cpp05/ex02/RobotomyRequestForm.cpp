/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:55 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/20 23:32:36 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm copy constructor called" << endl;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm copy assignment constructor called" << endl;
	if (this != &copy)
	{
		// name = copy.name;
		// grade = copy.grade;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default constructor called" << endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(string target)
{
	if (this->getGrade() == 72 && this->getGrdeToexecute() == 45)
	{
		cout << target << " has been robotomized successfully 50% of the time." << endl;
	}
	else
		cout << "the robotomy failed." << endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor)
{
	int		grade;

	grade = executor.getGrade();
	cout << grade << endl;
	if (this->getSign() == true && grade > 0 && grade < 150)
	{
		if (this->getGrade() == 25 && this->getGrdeToexecute() == 5)
			cout << this->target << " has been robotomized successfully 50% of the time. " << endl;
		else
			cout << "robotomy failed." << endl;
	}
	else
	{
		if (grade < 0)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
	}
}