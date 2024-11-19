/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:37:56 by armarake          #+#    #+#             */
/*   Updated: 2024/10/30 16:00:34 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = 0;
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*#include <stdio.h>
int main()
{
	int *arr = ft_range(1, 5);
	int i = 0;
	while (i < 4)
	{
		printf("%d\t", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
