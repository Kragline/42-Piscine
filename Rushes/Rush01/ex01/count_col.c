/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:32 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 15:17:31 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_visible_col(int grid[9][9], int visible_cols[9])
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
			if (grid[j][i] > max_height)
			{
				max_height = grid[j][i];
				count++;
			}
			j++;
		}
		visible_cols[i] = count;
		i++;
	}
}

void	count_visible_col_rev(int grid[9][9], int visible_cols_rev[9])
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
			if (grid[j][i] > max_height)
			{
				max_height = grid[j][i];
				count++;
			}
			j--;
		}
		visible_cols_rev[i] = count;
		i--;
	}
}
