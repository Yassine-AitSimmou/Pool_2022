/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:40:30 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/13 19:35:12 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_iterative_factorial(int nb)
{
    unsigned int res;
 
    res = 1;
    while(nb > 0)
    {
            res *= nb;
            nb--;
    }
    if(nb < 0)
    {
        return(0);
    }
    return(res);
}

int main(void)
{
    int x = 0;
    printf("the fact of %d is: %d", x, ft_iterative_factorial(x));
}