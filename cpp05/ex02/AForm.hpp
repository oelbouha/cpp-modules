/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:41:33 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/06 11:35:28 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class	AForm
{
	private:
		const	string	name;
		bool			sign;
		const	int		gradeToSign;
		const	int		gradeToExecute;

	public:
		AForm();
		AForm(const AForm& other);
		AForm&	operator=(const AForm& original);
		AForm(const string _name, const int grade, const int execute);
		virtual ~AForm();

		class	GradeTooHighException : public std::exception{
			public :
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception{
			public :
				const char* what() const throw();
		};
		class	FailedToExecute : public std::exception{
			public :
				const char* what() const throw();
		};

		string		getName() const;
		int			getGrade() const;
		int			getGrdeToexecute() const;
		bool		getSign() const;
		void		beSigned(Bureaucrat& Bureaucrat);
		void		execute(Bureaucrat const& executor) const;
		virtual void		action() const = 0;
};

#endif