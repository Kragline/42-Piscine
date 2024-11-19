/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:34:00 by armarake          #+#    #+#             */
/*   Updated: 2024/10/30 13:12:58 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	diff = max - min;
	*range = (int *)malloc(sizeof(int) * diff);
	if (*range == NULL)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}

/*#include <stdio.h>
int	main(void)
{
	int *arr;

	int i = 0;
	int diff = ft_ultimate_range(&arr, 1, 5);
	while (i < 4)
	{
		printf("%d\t", arr[i]);
		i++;
	}
	printf("\n%d\n", diff);
	return (0);
}*/
