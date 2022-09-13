/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:13:19 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/29 00:29:24 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write(1, &x, 1);
		x++;
	}
}
/*int main()
{
    ft_print_alphabet();
	return (0);
}*/
