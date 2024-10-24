/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:45:23 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/24 16:19:58 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void first_word(char *str)
{
	int i;
	i = 0;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;

	while(str[i] != ' ' && str[i] != '\t' || str[i] != '\n' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		first_word(av[1]);
		return(0);
	}
	else 
		ft_putchar('\n');
	return(0);
}
