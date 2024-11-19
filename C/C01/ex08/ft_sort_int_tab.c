/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:50:57 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:32:18 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
    int array[5] = {1, 4, 3, 2, 5};
    int i = 0;

    for (int i = 0; i < 5; i++)
        printf("%d\t", array[i]);
    printf("\n");

    ft_sort_int_tab(array, 5);

    for (int i = 0; i < 5; i++)
        printf("%d\t", array[i]);
    printf("\n");
}*/
