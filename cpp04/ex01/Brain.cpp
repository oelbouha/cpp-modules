/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:12:42 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/31 23:05:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << newline;
	*this = other;
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << "Brain copy assignment constructor called" << newline;
	if (this != &copy)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::Brain()
{
	std::cout << "Brain default constructor called" << newline;
	ideas[0] = '\0';
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << newline;
}
