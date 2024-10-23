/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:50:50 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/20 14:50:56 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb == 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (x <= nb / 2 && nb > 2)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*int	main(void)
{
	int	nb;

	nb = 1;
	printf("First test: (root is 1 expected 1)\nResult: %d",
			ft_sqrt(nb));

	return (1);
}*/
