/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print__reverse__alphabet.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:40:49 by giguney           #+#    #+#             */
/*   Updated: 2024/02/01 17:08:22 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_print_reverse_alphabet(void)
{
    char a;
    a = 'a';
    while (a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}
int main() {
    ft_print_reverse_alphabet();
    return 0;
}


