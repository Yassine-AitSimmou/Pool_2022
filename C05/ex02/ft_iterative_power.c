/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 01:39:14 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/05 16:47:25 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
    int base;
    base = nb;
    while (power > 1)
    {
        base *= nb;
        power--;
    }
    
    if(power == 0)
        return (1);
    if (power < 0)
        return(0);
    return(base);
}

int main(void)
{
    int x = 2;
    int y = 4;
    printf("%d", ft_iterative_power(x, y));
}