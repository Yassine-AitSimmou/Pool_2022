/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:35:59 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:43:34 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
	char x[] = "kasdajda";
	char a[] = "1212jasdla557sadasd";
	char b[] = "-a--**&#)@)*$(&";
	char c[] = "-a--***&#)@)*$(&";
	printf("%d \n", ft_str_is_lowercase(x));
	printf("%d \n", ft_str_is_lowercase(a));
	printf("%d \n", ft_str_is_lowercase(b));
	printf("%d \n", ft_str_is_lowercase(c));
}*/
