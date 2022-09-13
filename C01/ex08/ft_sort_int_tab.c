/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:00:17 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/30 17:55:45 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab [i] = tab[i + 1];
			tab[i + 1] = swap;
			i = -1;
		}
		i++;
	}
}
/*int main(void)
{
	int a[6] = {7, 4, 2, 5, 1, 3};
	int x = 0;
	
	ft_sort_int_tab(a, 6);
	while (x < 6)
	{
		printf("%d", a[x]);
		x++;
	}
}*/
