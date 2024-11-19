/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:38:04 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 15:08:41 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("za16516avw"));
    printf("%d\n", ft_str_is_numeric("1561"));
    return (0);
}*/
