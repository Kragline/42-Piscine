/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:24:34 by armarake          #+#    #+#             */
/*   Updated: 2024/10/22 16:25:59 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_strcmp("Fun", "Foo"));
	printf("%d\n", ft_strcmp("Foo", "Foo"));
	printf("%d\n", ft_strcmp("Foo", "Fun"));

	return (0);
}*/
