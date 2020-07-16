/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:14:10 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:14:22 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n >= '0')
    {
        ft_putchar('P');
    }
    else
    {
        ft_putchar('N');
    }
}

