/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhrlopy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:11:33 by skhrlopy          #+#    #+#             */
/*   Updated: 2024/10/20 13:48:49 by skhrlopy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1 && x > 1 && y > 1))
		ft_putchar('A');
	else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
		ft_putchar('C');
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x == 0 || y == 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
