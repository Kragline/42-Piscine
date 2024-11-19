/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:18:01 by armarake          #+#    #+#             */
/*   Updated: 2024/10/27 13:49:33 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	parse_constraints(char *input, int *constraints)
{
	int	i;

	i = 0;
	if (ft_lenstr(input) != 31)
		return (1);
	while (i < 16)
	{
		if (!(*input <= '4' && *input >= '1'))
			return (1);
		constraints[i] = *input - '0';
		if (*input != ' ' && *input != '\0')
			input++;
		if (*input == ' ')
			input++;
		i++;
	}
	return (0);
}
