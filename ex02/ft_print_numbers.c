/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:12:45 by ismlambo          #+#    #+#             */
/*   Updated: 2020/07/12 13:13:20 by ismlambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include<unistd.h>

void ft_putchar(char c);


void ft_print_numbers(void){
    
    int n;
    n = '0';

    while (n <= '9'){
        ft_putchar(n);
        n++;
    }
}

void ft_putchar(char c){
    write(1, &c , 1);
}

int main(void){
    ft_print_numbers();
    return(0);
}
