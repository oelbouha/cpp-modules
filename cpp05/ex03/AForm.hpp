/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:41:33 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/23 23:32:53 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

using std::cout;
using std::string;
using std::endl;

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
		AForm(const string _name, bool sign, const int grade, const int execute);
		virtual ~AForm();

		class	GradeTooHighException : public std::exception{
			public :
				const char* what() const throw() {
					return  "grade too high\n";
				}
		};
		class	GradeTooLowException : public std::exception{
			public :
				const char* what() const throw() {
					return  "grade too Low\n";
				}
		};

		string			getName() const;
		int				getGrade() const;
		int				getGrdeToexecute() const;
		bool			getSign() const;
		void			beSigned(Bureaucrat& Bureaucrat);
		virtual void	execute(Bureaucrat const& executor) = 0;
};

#endif