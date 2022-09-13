/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:37:07 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/30 17:51:59 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main(void)
{
	int x;
	int y;
	x = 23;
	y = 10;
	ft_ultimate_div_mod(&x, &y);
	printf("this is x %d\n and this is y %d", x, y);
}*/
