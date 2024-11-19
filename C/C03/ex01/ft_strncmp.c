/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:56:01 by armarake          #+#    #+#             */
/*   Updated: 2024/10/24 16:13:23 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%d\n", ft_strncmp("Fun", "Foo", 2));
	printf("%d\n", strncmp("Fun", "Foo", 2));	

	printf("%d\n", ft_strncmp("Foo", "Foo", 2));
	printf("%d\n", strncmp("Foo", "Foo", 2));

	printf("%d\n", ft_strncmp("Foo", "Fun", 2));
	printf("%d\n", strncmp("Foo", "Fun", 2));

	return (0);
}*/
