/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:25:06 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 15:07:21 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	fill_matrix(int grid[9][9]);
int		parse_constraints(char *input, int *constraints);
int		slove(int grid[9][9], int constraints[36], int row, int col);

void	print_grid(int grid[9][9])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 9 - 1)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char *argv[])
{
	int		grid[9][9];
	int		*constraints;
	char	*input;

	input = argv[1];
	fill_matrix(grid);
	constraints = (int *)malloc(36 * sizeof(int));
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (parse_constraints(input, constraints))
		write(1, "Error\n", 6);
	else if (slove(grid, constraints, 0, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	free(constraints);
	return (0);
}
