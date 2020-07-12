/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:11:40 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:12:02 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
    char start;
    char end;

    end = 'a';
    start = 'z';
    while (start >= end){
        ft_putchar(start);
        start = start - 1;
    }
}

void ft_putchar(char c)
{
    write(1, &c , 1);
}

