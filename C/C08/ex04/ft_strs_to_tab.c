/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:45:16 by armarake          #+#    #+#             */
/*   Updated: 2024/11/04 18:27:52 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = string_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	struct s_stock_str *arr;

	arr = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%s\t", arr[i].str);
		printf("%s\t", arr[i].copy);
		printf("%d\n", arr[i].size);
		i++;
	}
}*/
