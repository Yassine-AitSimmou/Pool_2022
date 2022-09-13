/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:51:27 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/04 16:46:29 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}
/*int main(void)
{
	char x[] = "asdasdasd";
	printf("%s \n", ft_strupcase(x));

}*/
