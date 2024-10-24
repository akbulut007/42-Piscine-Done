/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotonee.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:43:07 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/24 18:14:04 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotonee(char *str)
{
	int c;

	c = 0;

	while(str[c])
	{
		if(str[c] >= 'a' && str[c] <= 'y')
			str[c] = str[c] + 1;
		else if(str[c] >= 'A' && str[c] <= 'Y')
			str[c] = str[c] + 1;
		else if(str[c] == 'z')
			str[c] = 'a';
		else if(str[c] == 'Z')
			str[c] = 'A';
		write(1, &str[c], 1);
		c++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		rotonee(av[1]);
	write(1, "\n", 1);
	return(0);
}
