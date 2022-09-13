/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:40:45 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/29 00:33:28 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(int x)
{
	if (x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	b;

	x = 0;
	while (x <= 98)
	{
		b = x + 1;
		while (b <= 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			ft_print_comma(x);
			b++;
		}
		x++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
}
*/
