/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:37:31 by oelbouha          #+#    #+#             */
/*   Updated: 2023/06/02 16:51:11 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int c, char **v)
{
	int i;
	int j;

	if (c > 1)
	{
		i = 0;
		while (v[++i])
		{
			j = -1;
			while (v[i][++j])
				putchar(toupper(v[i][j]));
			putchar(' ');
		}
		putchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
