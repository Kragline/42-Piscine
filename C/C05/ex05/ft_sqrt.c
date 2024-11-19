/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:09:37 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 16:41:24 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", ft_sqrt(10000));
	printf("%d\n", ft_sqrt(1000000));
	printf("%d\n", ft_sqrt(100000000));
	return (0);
}*/
