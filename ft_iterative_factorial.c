/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:13:58 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/15 17:58:58 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
/*int	main(void)
{
	int	num;
	int	res;

	num = -1;
        res = ft_iterative_factorial(num);
        printf("First test (input -1 expected 0)\nResult: %d", res);
	return (1);
}*/
