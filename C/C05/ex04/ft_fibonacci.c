/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:53:47 by armarake          #+#    #+#             */
/*   Updated: 2024/10/28 14:08:58 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(7));
	return (0);
}*/
