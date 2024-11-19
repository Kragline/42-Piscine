/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:38:33 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 15:09:01 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("NIUGYUV"));
    printf("%d\n", ft_str_is_uppercase("bwuNKLwef"));
    return (0);
}*/
