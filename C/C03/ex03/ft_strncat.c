/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:14:47 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 18:13:17 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < nb)
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
	char st2[] = " my Top G";
	printf("%s\n", ft_strncat(st1, st2, 5));
	return (0);
}*/
