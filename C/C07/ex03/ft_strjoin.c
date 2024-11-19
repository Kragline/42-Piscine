/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:13:51 by armarake          #+#    #+#             */
/*   Updated: 2024/10/30 15:46:57 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\n')
		len++;
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int	all_len;
	int	i;

	i = 0;
	all_len = 0;
	while (i < size)
	{
		all_len += str_len(strs[i]);
		i++;
	}
	all_len += (size - 1) * str_len(sep);
	return (all_len);
}

int	str_cat(char *dest, char *src, int index)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		index;
	int		i;
	char	*result;

	if (size == 0)
		return ((char *)malloc(1));
	total_len = total_length(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < size)
	{
		index = str_cat(result, strs[i], index);
		if (i < size - 1)
			index = str_cat(result, sep, index);
		i++;
	}
	result[index] = '\0';
	return (result);
}

/*#include <stdio.h>
int main(void)
{
    char *strs[] = {"hello", "world", "!"};
    char *sep = "__";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep);

    if (result) {
        printf("%s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
