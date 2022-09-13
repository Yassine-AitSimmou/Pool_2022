/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is-alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:37:01 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/05 14:54:01 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= 'a' && str[x] <= 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
	char x[] = "asjldhaZAd";
	char a[] = "1jasdla557sadasd";
	char b[] = "-*(&";
	char c[] = "-*&#)@)*$(&";
	printf("%d \n", ft_str_is_alpha(x));
	printf("%d \n", ft_str_is_alpha(a));
	printf("%d \n", ft_str_is_alpha(b));
	printf("%d \n", ft_str_is_alpha(c));
}*/
