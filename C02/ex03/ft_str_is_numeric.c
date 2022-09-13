/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:21:56 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:42:46 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 48 && str[x] <= 57))
			x++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
	char x[] = "1254122";
	char a[] = "1212jasdla557sadasd";
	char b[] = "-*dasda";
	char c[] = "asdfasf";
	printf("%d \n", ft_str_is_numeric(x));
	printf("%d \n", ft_str_is_numeric(a));
	printf("%d \n", ft_str_is_numeric(b));
	printf("%d \n", ft_str_is_numeric(c));
}*/
