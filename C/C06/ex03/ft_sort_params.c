/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:35:34 by armarake          #+#    #+#             */
/*   Updated: 2024/10/29 13:50:07 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char *arg)
{
	while (*arg)
		write(1, arg++, 1);
	write(1, "\n", 1);
}

int	arg_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	sort_args(char **tab, int size)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (arg_cmp(tab[i], tab[j]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	sort_args(argv, argc);
	i = 1;
	while (i < argc)
	{
		print_arg(argv[i]);
		i++;
	}
	return (0);
}
