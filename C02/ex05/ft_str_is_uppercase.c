/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:46:01 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:58:39 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
			x++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
	char x[] = "KJSDJASGDJ";
	char a[] = "Akajsd";
	char b[] = "56577asdasaadasdASDAS";
	char c[] = "-&#)@)*$(&";
	printf("%d \n", ft_str_is_uppercase(x));
	printf("%d \n", ft_str_is_uppercase(a));
	printf("%d \n", ft_str_is_uppercase(b));
	printf("%d \n", ft_str_is_uppercase(c));
}*/
