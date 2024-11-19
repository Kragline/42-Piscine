/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:24 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 15:16:01 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_visible_row(int grid[9][9], int visible_rows[9])
{
	int	i;
	int	max_height;
	int	count;
	int	j;

	i = 0;
	while (i < 9)
	{
		max_height = 0;
		count = 0;
		j = 0;
		while (j < 9)
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

void	count_visible_row_rev(int grid[9][9], int visible_rows_rev[9])
{
	int	i;
	int	max_height;
	int	count;
	int	j;

	i = 8;
	while (i >= 0)
	{
		max_height = 0;
		count = 0;
		j = 8;
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
