/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:37:35 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/06 19:33:36 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
int ft_sqrt(int nb)
{
    long    in;
    
    if(nb <= 0)
        return(0);
    if(nb == 1)
        return(1);
    in = 1;
    if (nb >= 2)
    {
        while (in <= (nb / 2))
        {
            if(in * in == nb)
            {
                return(in);
            }
            in++;
        }
    }
    return(0);
}

int main(void)
{
    printf("%d\n", ft_sqrt(25));
    printf("%.0f", sqrt(25));
}