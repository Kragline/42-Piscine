/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:44:23 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 13:52:05 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(3, -1));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(3, 2));
	return (0);
}*/
