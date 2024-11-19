/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:36:59 by armarake          #+#    #+#             */
/*   Updated: 2024/10/22 13:32:00 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Trippple G";
    char str2[] = "balalalala";

    printf("%s\n", ft_strncpy(str2, str1, 5));
    printf("%s\n", strncpy(str2, str1, 5));
	printf("%s\n", ft_strncpy(str2, str1, 10));
    printf("%s\n", strncpy(str2, str1, 10));
    return (0);
}*/
