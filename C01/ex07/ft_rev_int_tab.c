/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:37:23 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/30 17:54:33 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	x;

	x = 0;
	while (x < (size / 2))
	{
			swap = tab[x];
			tab[x] = tab[size - 1 - x];
			tab[size - 1 - x] = swap;
			x++;
	}
}
/*int main(void)
{
	int a[] = {7,6,5,4,3};
	int x;
	x = 0;
	ft_rev_int_tab(a, 5);
	while (x < 5)
	{
		printf("%d", a[x]);
		x++;
	}
}*/
