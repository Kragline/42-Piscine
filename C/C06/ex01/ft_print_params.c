/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:11:47 by armarake          #+#    #+#             */
/*   Updated: 2024/10/29 13:19:43 by armarake         ###   ########.fr       */
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

	i = 1;
	while (i < argc)
	{
		print_arg(argv[i]);
		i++;
	}
	return (0);
}
