/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:49:57 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:31:23 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}

/*int main(void)
{
    int     anum;
    int     bnum;

    anum = 15;
    bnum = 2;
    ft_ultimate_div_mod(&anum, &bnum);
    printf("%d\n", anum);
    printf("%d\n", bnum);
    return (0);
}*/
