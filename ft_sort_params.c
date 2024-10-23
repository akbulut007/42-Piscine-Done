/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:46:08 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/22 15:46:10 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	comp_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_ft(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*ch;

	i = 1;
	while (i <= argc - 1)
	{
		j = 1;
		while (j <= argc - 1)
		{
			if (comp_str(argv[i], argv[j]) < 0)
			{
				ch = argv[i];
				argv[i] = argv[j];
				argv[j] = ch;
			}
			j++;
		}
		i++;
	}
	print_ft(argc, argv);
	return (0);
}
