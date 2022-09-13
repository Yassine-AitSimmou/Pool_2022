/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:59:26 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/05 17:37:00 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_recursive_power(int nb, int power)
{
    if(power > 1)
    {
        return (nb * ft_recursive_power(nb , (power - 1)));
    }
    if(power == 0)
        return(1);
    if(power < 0)
        return(0);
    return(nb);
}

int main(void)
{
    int x = 2;
    int y = 3;
    printf("power of %d^%d is %d", x, y, ft_recursive_power(x, y));
}