/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:15:41 by armarake          #+#    #+#             */
/*   Updated: 2024/10/29 16:36:12 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	string_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*new_str;

	if (src == NULL)
		return (NULL);
	l = string_len(src);
	new_str = (char *)malloc(l + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*src != '\0')
	{
		new_str[i] = *src;
		i++;
		src++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*#include <stdio.h>
int main(void)
{
	char string[] = "I love mohito";
	char *new = ft_strdup(string);

	printf("%s\n", new);
	return (0);
}*/
