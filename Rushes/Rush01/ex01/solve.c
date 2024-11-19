/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:43 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 15:20:13 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_constraints(int grid[9][9], int constraints[36]);

int	is_valid(int grid[9][9], int row, int col, int num)
{
	int	x;

	x = 0;
	while (x < 9)
	{
		if (grid[row][x] == num || grid[x][col] == num)
			return (0);
		x++;
	}
	return (1);
}

int	slove(int grid[9][9], int constraints[36], int row, int col)
{
	int	num;

	if (row == 9)
		return (check_constraints(grid, constraints));
	if (col == 9)
		return (slove(grid, constraints, row + 1, 0));
	num = 1;
	while (num <= 9)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (slove(grid, constraints, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
