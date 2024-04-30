/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:40:49 by giguney           #+#    #+#             */
/*   Updated: 2024/01/25 20:23:46 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_print_reverse_alphabet(void)
{
    char    harf;
        harf = 'z';
        while (harf >= 'a')
     {       
        write(1 ,&harf ,1);
        harf --;    
     }
}
    
int main(void) 
{
    ft_print_reverse_alphabet();
    return 0;
}