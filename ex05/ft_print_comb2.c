/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:16:43 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:17:03 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_nbr(char a, char b)
{
    ft_putchar(a);
    ft_putchar(b);

    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb2(void)
{
    char a;
    char b;

    a = '0';
    b = '0';
    while(a <= '9')
    {
        while(b <= '9')
        {
            if(a <= b){
                ft_print_nbr(a, b);
            }
            b++;
        }
        a++;
        b = 0;
    }

}

