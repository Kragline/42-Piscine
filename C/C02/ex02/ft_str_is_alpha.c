/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:37:13 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 15:08:08 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("cbweiubvaw"));
    printf("%d\n", ft_str_is_alpha("bwu15awef"));
    return (0);
}*/
