/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:36:44 by armarake          #+#    #+#             */
/*   Updated: 2024/10/21 15:36:48 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
    char *str1 = "Trippple G";
    char *str2;
    
    str2 = ft_strcpy(str2, str1);
    printf("%s\n", str2);

    return (0);
}*/
