/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:57:01 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:47:21 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}
/*int main(void)
{
	char x[] = "ALFHLASHF";
	printf("%s \n", ft_strlowcase(x));

}*/
