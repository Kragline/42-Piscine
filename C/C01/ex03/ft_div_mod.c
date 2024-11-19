/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:49:41 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:31:15 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
    int     d;
    int     m;

    ft_div_mod(5, 2, &d, &m);
    printf("%d\n", d);
    printf("%d\n", m);
    return (0);
}*/
