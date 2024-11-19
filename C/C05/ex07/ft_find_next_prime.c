/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:48 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 15:06:26 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (1)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(14));
	return (0);
}*/
