/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:13:28 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/14 11:14:22 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if(nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if (nbr < 10)
    {
        ft_putchar(nbr + '0');
    }
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

int main(void)
{
    ft_putnbr(47);
    ft_putchar('\n');
    return(0);
}
