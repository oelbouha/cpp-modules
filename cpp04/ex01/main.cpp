/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/29 00:13:25 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	init()
{
	// Animal *arr[10];
	// for(int i = 0; i < 2; i++)
	// {
	// 	if (i % 2)
	// 		arr[i] = new Dog();
	// 	else
	// 		arr[i] = new Cat();
	// }
	// for(int i = 0; i < 2; i++)
	// 	delete arr[i];
	const Animal* meta = new Cat();
	const Animal* j = new Dog();
	// meta = j;
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
}

int main(void)
{
	init();
	return (0);
}