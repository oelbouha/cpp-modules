/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:13:06 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 18:50:33 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class	Brain
{
	protected:
	std::string	ideas[100];

	public:
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& original);
	~Brain();
};

#endif