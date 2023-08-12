/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:14:43 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/02 10:27:06 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap& original);
	FragTrap&	operator=(const FragTrap& original);
	void		attack(const std::string& target);
	void		guardGate();
	void		highFivesGuys(void);
};


#endif