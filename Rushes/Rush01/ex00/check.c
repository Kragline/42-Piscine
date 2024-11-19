/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:15 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 12:16:49 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	count_visible_row(int grid[4][4], int visible_rows[4]);
void	count_visible_row_rev(int grid[4][4], int visible_rows_rev[4]);
void	count_visible_col(int grid[4][4], int visible_cols[4]);
void	count_visible_col_rev(int grid[4][4], int visible_cols_rev[4]);
void	fill_array(int array[4]);

void	fill_all(int v_rows[4], int v_rows_r[4], int v_cols[4], int v_cols_r[4])
{
	fill_array(v_rows);
	fill_array(v_rows_r);
	fill_array(v_cols);
	fill_array(v_cols_r);
}

void	check_row(int grid[4][4], int v_rows[4], int v_rows_r[4])
{
	count_visible_row(grid, v_rows);
	count_visible_row_rev(grid, v_rows_r);
}

void	check_col(int grid[4][4], int v_cols[4], int v_cols_r[4])
{
	count_visible_col(grid, v_cols);
	count_visible_col_rev(grid, v_cols_r);
}

int	check_constraints(int grid[4][4], int constraints[16])
{
	int	i;
	int	v_rows[4];
	int	v_rows_r[4];
	int	v_cols[4];
	int	v_cols_r[4];

	check_row(grid, v_rows, v_rows_r);
	check_col(grid, v_cols, v_cols_r);
	i = 0;
	while (i < 4)
	{
		if (v_rows[i] != constraints[8 + i])
			return (0);
		if (v_cols[i] != constraints[i])
			return (0);
		if (v_rows_r[i] != constraints[12 + i])
			return (0);
		if (v_cols_r[i] != constraints[4 + i])
			return (0);
		i++;
	}
	return (1);
}
