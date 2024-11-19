/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:22:05 by armarake          #+#    #+#             */
/*   Updated: 2024/10/29 13:24:16 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char *arg)
{
	while (*arg)
		write(1, arg++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		print_arg(argv[i]);
		i--;
	}
	return (0);
}
