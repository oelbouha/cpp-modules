/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:24:33 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/23 11:34:36 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;


class PresidentialPardonForm : public AForm
{
	private :
		string	target;
	public:
		PresidentialPardonForm(string target);
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& original);
		~PresidentialPardonForm();
		
		void	execute(Bureaucrat const& executor);
};

#endif
