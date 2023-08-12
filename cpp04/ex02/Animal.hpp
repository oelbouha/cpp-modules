/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:49:33 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 19:54:27 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

# define newline "\n"

class	Animal
{
	protected:
	std::string	type;

	public:
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& original);
	virtual ~Animal();
	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif