/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:57:45 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/29 00:05:32 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog& original);
		Dog&	operator=(const Dog& original);
		~Dog();

		void	makeSound() const;
		std::string	getType() const;
};

#endif