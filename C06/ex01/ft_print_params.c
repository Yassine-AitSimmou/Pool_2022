/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:48:46 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/12 19:34:59 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	i;

	i = 1;
	while (ac > i)
	{
		x = 0;
		while (av[i][x] != '\0')
		{
			write(1, &av[i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
