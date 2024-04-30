/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:57 by giguney           #+#    #+#             */
/*   Updated: 2024/02/01 20:04:23 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int j;
	int i;

	i = 0;
	while(i <= 98)
{
	j = i+1;
while(i >= 98)
{
	j= i + 1;
	while(j <= 99)
	{
		ft_putchar ('0' + i/10);
		ft_putchar ('0' + i%10);
		ft_putchar (' ');
		ft_putchar (0 + j/10);
		ft_putchar (0 + j%10);
		if(!(i == 98 && j == 99))
		{
			ft_putchar(',');
		}
		j++;
	}
	i++;
}
}	
}
int main()
{
	ft_print_comb2();
}