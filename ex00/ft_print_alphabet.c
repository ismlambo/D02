/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:08:48 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:09:26 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c);

void ft_print_alphabets(void){
    char start;
    char end;

    start = 'a';
    end = 'z';
    while (start <= end){
        ft_putchar(start);
        start++;
    }
}

void ft_putchar(char c){
    write(1, &c , 1);
}

