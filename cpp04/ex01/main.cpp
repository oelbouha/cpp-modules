/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:50:07 by oelbouha          #+#    #+#             */
/*   Updated: 2023/09/03 13:07:23 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	init()
{
	int	size;
	
	size = 4;
	Animal *arr[10];
	for(int i = 0; i < size; i++)
	{
		if (i < size / 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
		std::cout << std::endl;
	}
	for(int i = 0; i < size; i++)
	{
		delete arr[i];
		std::cout << std::endl;
	}
}

int main(void)
{
	init();
	return (0);
}