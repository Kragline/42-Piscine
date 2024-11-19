/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:49:39 by armarake          #+#    #+#             */
/*   Updated: 2024/11/03 14:09:58 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_list
{
	char	*nb;
	char	*val;
}		t_list;

long long		ft_atoi(const char *str);
long long		process_number(char *num);
void			ft_putstr(char *str);
char			*get_number(char *text, int *start_i);
char			*get_value(char *text, int *start_i);
int				ft_strcmp(char *s1, char *s2);
t_list			*process(char *file);

#endif
