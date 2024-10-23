/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:34:44 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/06 19:01:34 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char l);

void	print_row(int x, int i, int j, int y)
{
	if (i >= x)
	{
		ft_putchar('\n');
		return ;
	}
	if ((j == 0 && (i == 0 || i == x - 1)))
		ft_putchar('A');
	else if (j == y - 1 && (i == 0 || i == x - 1))
		ft_putchar('C');
	else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
	print_row(x, i + 1, j, y);
}

void	print_all_rows(int x, int y, int j)
{
	if (j >= y)
	{
		return ;
	}
	print_row(x, 0, j, y);
	print_all_rows(x, y, j + 1);
}

void	rush02(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_all_rows(x, y, 0);
}
