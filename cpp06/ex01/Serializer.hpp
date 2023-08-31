/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:35:13 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/26 15:35:02 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <cmath>  

using std::cout;
using std::string;
using std::endl;

// typedef unsigned int * uintptr_t;
class	Data
{
	private:
		int value;
	public:
		Data(int value){
		this->value = value;
		};
		void print()
		{
			cout << value << endl;
		}
};

class	Serializer
{
	private:
		
	public:
		Serializer();
		Serializer(const Serializer& other);
		Serializer&	operator=(const Serializer& original);
		~Serializer();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};



#endif


