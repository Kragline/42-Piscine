/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:24 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 13:21:18 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_visible_row(int grid[4][4], int visible_rows[4])
{
	int	i;
	int	max_height;
	int	count;
	int	j;

	i = 0;
	while (i < 4)
	{
		max_height = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			if (grid[i][j] > max_height)
			{
				max_height = grid[i][j];
				count++;
			}
			j++;
		}
		visible_rows[i] = count;
		i++;
	}
}

void	count_visible_row_rev(int grid[4][4], int visible_rows_rev[4])
{
	int	i;
	int	max_height;
	int	count;
	int	j;

	i = 3;
	while (i >= 0)
	{
		max_height = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (grid[i][j] > max_height)
			{
				max_height = grid[i][j];
				count++;
			}
			j--;
		}
		visible_rows_rev[i] = count;
		i--;
	}
}
