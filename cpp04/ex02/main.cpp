/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/05 23:07:13 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	init()
{
	const Animal* meta = new Cat();
	const Animal* j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
}

int main(void)
{
	init();
	// while (1);
	return (0);
}