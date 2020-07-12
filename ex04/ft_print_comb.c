/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:15:31 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:16:01 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_nbr(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);

    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '0';
    c = '0';
    while(a <= '9')
    {
        while(b <= '9')
        {
            while(c <= '9')
            {
                if (a < b && b < c)
                {
                    ft_print_nbr(a, b, c);
                }
                c++;
            }
            b++;
            c = 0;
        }
        a++;
        b = 0;
    }

}

