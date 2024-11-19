/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:50:38 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:32:08 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}

/*int main(void)
{
    int arr[4] = {1, 2, 3, 4};
    
    for (int i = 0; i < 4; i++)
        printf("%d\t", arr[i]);
    printf("\n");

    ft_rev_int_tab(arr, 4);

    for (int i = 0; i < 4; i++)
        printf("%d\t", arr[i]);
    printf("\n");

    return (0);
}*/
