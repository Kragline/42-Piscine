/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:38:48 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 15:09:09 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable("lk15/#~^&>}["));
    printf("%d\n", ft_str_is_printable("\n\t"));
    return (0);
}*/
