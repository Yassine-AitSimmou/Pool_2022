/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:37:48 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/05 18:49:00 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return(-1);
    if(index <= 1)
        return(index);
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    
}
int main(void)
{
    int x;
    x = 7;
    printf("%d", ft_fibonacci(x));
}