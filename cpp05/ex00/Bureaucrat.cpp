/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:16:58 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/19 14:30:15 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor called" << newline;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat copy assignment constructor called" << newline;
	if (this != &copy)
	{
		name = copy.name;
		grade = copy.grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << newline;
	name = "default";
	grade = 0;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << newline;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 0)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	this->name = name;
}

std::ostream&	operator<<(std::ostream& COUT, Bureaucrat& crat)
{
	COUT << crat.getName() << ", bureaucrat grade " << crat.getGrade() << newline;
	return (COUT);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::incrementGrade()
{
	grade--;
	if (grade < 0)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade()
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}