/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:38:18 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 15:08:52 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_lowercase(""));
    printf("%d\n", ft_str_is_lowercase("cbweiubvaw"));
    printf("%d\n", ft_str_is_lowercase("bwuNKLwef"));
    return (0);
}*/
