/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:52:43 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/20 14:52:45 by muhakbul         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*int   main(void)
{
        int     nb;
        int     res;

        nb = 83;
        res = ft_find_next_prime(nb);
        printf("First test: (number is 83 expected 83)\nResult: %d", res);

        return (1);
}*/
