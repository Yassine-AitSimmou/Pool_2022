/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:58:31 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:50:32 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_strlowcase(char *str)
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
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (y == 1)
				str[x] -= 32;
			y = 0;
		}
		else if (str[x] >= '0' && str[x] <= '9')
			y = 0;
		else
			y = 1;
		x++;
	}
	return (str);
}
/*int main(void)
{
	char x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "dasdasdLWEHLKHDKLAS+ASDA HDKJ82387837960*#^*#^00.1354534asda AAS";
	printf("%s \n", ft_strcapitalize(x));
	printf("%s \n", ft_strcapitalize(b));

}*/
