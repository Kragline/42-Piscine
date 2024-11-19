/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:34:22 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 13:43:46 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	pow = 1;
	while (i <= power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(3, -1));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(3, 2));
	return (0);
}*/
