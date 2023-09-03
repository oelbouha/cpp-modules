/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/01 20:54:38 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	init()
{
	const Animal* meta = new Cat();
	const Animal* j = new Dog();

	std::cout << std::endl;
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
}

int main(void)
{
	init();
	return (0);
}