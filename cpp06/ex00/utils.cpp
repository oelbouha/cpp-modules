/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:49:29 by oelbouha          #+#    #+#             */
/*   Updated: 2023/08/26 10:50:16 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	getType(string str)
{
	int	type;

	type = 0;
	if (str.length() == 1 && !isdigit(str[0]))
		return (CHARTYPE);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == str.length() - 1 && str[i] == 'f')
		{
			if (type != NOTANUMBER)
				return (FLOATTYPE);
			return (NOTANUMBER);
		}
		else if (str[i] == '.')
			type = DOUBLETYPE;
		else if (!isdigit(str[i]) && str[i] != '.')
			type = NOTANUMBER;
	}
	if (type == 0)
		type = INTTYPE;
	return (type);
}

int	ft_atoi(string str)
{
	unsigned long long	res;
	int					sign;
	int					i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\t')
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}