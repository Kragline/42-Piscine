/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armarake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:36:19 by armarake          #+#    #+#             */
/*   Updated: 2024/11/03 17:36:29 by armarake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum a_bool
{
	false = 0,
	true = 1,
}	t_bool;

# define FALSE false
# define TRUE true
# define EVEN(number) ((number) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n" 
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif