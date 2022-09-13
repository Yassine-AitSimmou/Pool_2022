/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:16:37 by yaait-si          #+#    #+#             */
/*   Updated: 2022/08/30 17:43:22 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int x = 23;
	int i = 10;

	int div;
	int mod;
	ft_div_mod(x, i, &div, &mod);
	printf("x = %d\n", div);
	printf("i = %d", mod);
}*/
