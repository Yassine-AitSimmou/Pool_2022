/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-si <yaait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:54:29 by yaait-si          #+#    #+#             */
/*   Updated: 2022/09/06 02:16:56 by yaait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int    ft_recursive_factorial(int nb)
{
    if(nb == 1)
        return(1);
    else if (nb < 0)
    {
        return 0;
    }
    else
    {  
        return nb * ft_recursive_factorial(nb - 1); 
    }
    return (nb);
    
}
int	main(void)
{
    unsigned int x;
    x = 1;
	printf("the fact of %d is %d", x, ft_recursive_factorial(x));
}