/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:16:58 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/23 23:32:39 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const AForm& other): name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm copy constructor called" << endl;
	*this = other;
}

AForm& AForm::operator=(const AForm& copy)
{
	std::cout << "AForm copy assignment constructor called" << endl;
	if (this != &copy)
	{
		sign = copy.sign;
	}
	return (*this);
}

AForm::AForm(void) : name("default form"), gradeToSign(0), gradeToExecute(0)
{
	std::cout << "AForm default constructor called" << endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << endl;
}

AForm::AForm(const string name, bool sign, const int grade, const int execute) : name(name), sign(sign), gradeToSign(grade), gradeToExecute(execute){
}

string	AForm::getName() const
{
	return name;
}

bool	AForm::getSign() const
{
	return sign;
}

int	AForm::getGrade() const
{
	return gradeToSign;
}

int	AForm::getGrdeToexecute() const
{
	return gradeToExecute;
}

void	AForm::beSigned(Bureaucrat& Bureaucrat)
{
	int grade;

	grade = Bureaucrat.getGrade();
	if (grade < 0)
		throw AForm::GradeTooLowException();
	if(grade > 0 && grade <= 150)
		sign = true;
}
