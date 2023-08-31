/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:43:28 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/24 00:02:19 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("defaultForm"), sign(0), grade(0), gradeToExecute(0)
{
	std::cout << "Form default constructor called" << endl;
}

Form::Form(const Form& other) : name(other.name), sign(other.sign), grade(other.grade), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form copy constructor called" << endl;
	*this = other;
}

Form& Form::operator=(const Form& copy)
{
	std::cout << "Form copy assignment constructor called" << endl;
	if (this != &copy)
	{
		sign = copy.sign;
	}
	return (*this);
}


Form::~Form()
{
	std::cout << "Form destructor called" << endl;
}

Form::Form(const string name, bool sign, const int grade, const int exec) : name(name), sign(sign), grade(grade), gradeToExecute(exec){
}

void	Form::beSigned(Bureaucrat& Bureaucrat)
{
	int grade;

	grade = Bureaucrat.getGrade();
	if (grade < 0)
		throw Form::GradeTooLowException();
	if(grade > 0 && grade <= 150)
		sign = true;
}

bool	Form::getSign() const
{
	return sign;
}

string	Form::getName() const{
	return (name);
}

int	Form::getGrade() const{
	return (grade);
}

int	Form::getGradeToExecute() const{
	return (gradeToExecute);
}

std::ostream&	operator<<(std::ostream& COUT, Form& form)
{
	COUT <<  "name: " << form.getName() << endl;
	COUT <<  "grade: " << form.getGrade() << endl;
	COUT <<  "sign: " << form.getSign() << endl;
	COUT <<  "grade to execute: " << form.getGradeToExecute() << endl;
	return (COUT);
}