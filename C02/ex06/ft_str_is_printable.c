/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:46:30 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:45:31 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 32 && str[x] <= 126))
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
	char b[] = "\n\t\v\f";
	char c[] = "\n\tadasda";
	printf("%d \n", ft_str_is_printable(x));
	printf("%d \n", ft_str_is_printable(a));
	printf("%d \n", ft_str_is_printable(b));
	printf("%d \n", ft_str_is_printable(c));
}*/
