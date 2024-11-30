/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhrlopy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:10:08 by skhrlopy          #+#    #+#             */
/*   Updated: 2024/10/20 13:51:48 by skhrlopy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(3, 5);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	rush(3, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(0, 0);
	return (0);
}
