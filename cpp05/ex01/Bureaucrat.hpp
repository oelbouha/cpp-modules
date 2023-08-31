/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:17:03 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/14 23:17:15 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

#define newline "\n"
#include "Form.hpp"
class 	Form;

class	Bureaucrat
{
	private:
		string		name;
		int			grade;

	public:
		Bureaucrat();
		Bureaucrat(string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& original);
		~Bureaucrat();

		class	GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw() {
					return  "execption too high\n";
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw() {
					return  "execption too Low\n";
				}
		};
		string 		getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form& form);
};

std::ostream&	operator<<(std::ostream& COUT, Bureaucrat& crat);

#endif


