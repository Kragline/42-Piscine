/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:49:20 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:31:07 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

/*int main(void)
{
    int     a;
    int     b;

    a = 20;
    b = 14;

    printf("%d\n", a);     
    printf("%d\n", b);     
    ft_swap(&a, &b);
    printf("%d\n", a);     
    printf("%d\n", b);     
    return (0);
}*/
