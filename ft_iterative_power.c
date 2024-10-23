/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:15:39 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/15 17:16:09 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = -2;
	printf("First test: (number is 5 and power is -2 expected 0)\nResult: %d",
       	ft_iterative_power(nb, power));

	return (1);
}*/
