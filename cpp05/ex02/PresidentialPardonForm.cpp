/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:55 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/20 23:32:36 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm copy constructor called" << endl;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	std::cout << "PresidentialPardonForm copy assignment constructor called" << endl;
	if (this != &copy)
	{
		
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default constructor called" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(string target)
{
	this->target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor)
{
	int		grade;

	grade = executor.getGrade();
	cout << grade << endl;
	if (this->getSign() == true && grade > 0 && grade < 150)
	{
		if (this->getGrade() == 25 && this->getGrdeToexecute() == 5)
			cout << this->target << " has been pardoned by Zaphod Beeblebrox." << endl;
	}
	else
	{
		if (grade < 0)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
	}
}