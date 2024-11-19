/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:39:38 by armarake          #+#    #+#             */
/*   Updated: 2024/10/23 16:25:15 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strlowcase(char *str, int *index)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
		*index = 1;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = strlowcase(str, &i);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				i += 2;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
    char st[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et";
	printf("%s\n", ft_strcapitalize(st));
    return (0);
}*/
