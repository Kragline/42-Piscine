/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:47 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 16:40:23 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
	char st1[] = "Hello";
	char st2[] = " my G";
	printf("%s\n", ft_strcat(st1, st2));
	return (0);
}*/
