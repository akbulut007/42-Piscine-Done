/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:51:25 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/20 14:51:27 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*int	main(void)
{
	int	nb;
	int	res;

	
	nb = 83;
        res = ft_is_prime(nb);
        printf("First test: (number is 83 expected 1)\nResult: %d", res);

	return (1);
}*/
