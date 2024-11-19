/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:07:02 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 13:21:27 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}*/
