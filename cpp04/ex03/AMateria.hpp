/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:57:45 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/09 22:23:06 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

class ICharacter;
#define newline "\n"
#include "ICharacter.hpp"

class AMateria
{
	protected:
	std::string type;

	public:
	AMateria();
	AMateria(const AMateria& other);
	AMateria(std::string const & type);
	AMateria&	operator=(const AMateria& copy);
	virtual ~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif