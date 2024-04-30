/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print__alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:33:59 by giguney           #+#    #+#             */
/*   Updated: 2024/02/01 17:08:23 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

    void ft_putchar(char c)
    {
    write (1,&c, 1);  
    }

    void ft_print_alphabet (void)
{
    char alphabet;
    alphabet = 'a';
    while (alphabet <= 'z');
        ft_putchar(alphabet);
        alphabet++;
}
