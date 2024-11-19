/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:32 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 11:25:34 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_visible_col(int grid[4][4], int visible_cols[4])
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

void	count_visible_col_rev(int grid[4][4], int visible_cols_rev[4])
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
