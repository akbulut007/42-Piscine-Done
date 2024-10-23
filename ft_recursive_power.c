/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:16:26 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/15 17:16:50 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*int  main(void)
{
        int     nb;
        int     power;

        nb = 2;
        power = 3;
        printf("First test: (number is 2 power is 3 expected 8)\nResult: %d",
        ft_recursive_power(nb, power));
        return (1);
}*/
