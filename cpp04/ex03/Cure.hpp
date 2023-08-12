/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:57:45 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/10 11:02:15 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure& other);
	Cure&	operator=(const Cure& copy);
	~Cure();
	AMateria*	clone() const; 
	void		use(ICharacter& target);
};

#endif